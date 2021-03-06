/*
 * Write an interactive tic-tac-toe game. Use the following board
 * layout and numbering scheme for user commands:
 *
 * 1 | 2 | 3
 * 4 | 5 | 6
 * 7 | 8 | 9
 *
 * Use the letter X to represent a move by the user, the letter O for a
 * move by the computer. A player specifies a move by typing the
 * number of the square. After each move, redraw the board to show
 * the new positions. Prevent the player from moving to squares that
 * are already occupied and be sure to report results as soon as the
 * player or the computer has three squares in a row in any direction.
 *
 * Refactoring to add some limited AI for the computer player. Seems
 * like adding a player 1 and player 2 function to the play loop would
 * make my life easier, as well. Could add some randomness to the AI
 * if I get excited, as otherwise the computer player would always win.
 */
#include <stdio.h>
#include <stdbool.h>



/* Global variables */
// x = human (play1), o = computer (play2, temp: human moves both times)
int curPlayer = 1;

/* (Global) board PTR, initialized with all zeros NOT Os */
int board_arr[9] = {0,0,0,0,0,0,0,0,0}; // arrays' names are pointers, don't forget!

/* Function primitives */
int drawBoard(int arr[9]);              /* draws the board */
int move(int spot);                     /* a move puts a value (X or O) into the designated spot */
bool canMove(void);                     /* determines whether there is any legal move. Returns false if all board spots are full */
bool checkWin(int curPlayer);           /* check if the current player has won or not */
bool isValid(int spot);                 /* check to see if the spot is a valid spot to move to (i.e. is a 0) */

int main(void) {
// simple test to tell that my original, sans-break case statement wasn't working,
// also makes a good unit test for small changes:
// drawBoard(b);
// move(1, 100);
// drawBoard(b);

    printf("Begin your game.\n");
    printf("Hit 1 for the first spot, 2 for the second, and so on...\n");

    while (1) {     // begin the play loop

        if (canMove() == false) {
            drawBoard(board_arr);
            printf("You have tied.\n");
            break;
        }
        drawBoard(board_arr);
        // ask to move a player
        printf("Pick a spot.\n");

        int spot;
        scanf("%d", &spot);
        if (isValid(spot) == false ) {
            printf("Invalid move.\n");
            continue;
        }
        move(spot);

        // check if win - if yes, break
        if (checkWin(curPlayer) == true ) {
            drawBoard(board_arr);
            printf("Player %i has won - congrats!\n", curPlayer);
            break;
        }

        // swap players
        curPlayer = curPlayer == 1 ? 2 : 1 ;
        // back to front of loop if no win
    }

    return 0;
}

int drawBoard(int arr[9]) {
/*
        for (int i = 0; i < 9; i++) {
            if (i == 0 || i == 3 || i == 6) {
                printf("%d |", arr[i]);
            }
            else if ((i+1)%2 == 0) {
                printf("| %d ", arr[i]);
            }
            else if ((i+1)%3 == 0) {
                printf("| %d\n", arr[i]);
            }
            else {
                printf("---------\n");
            }
        }
*/
    printf("%c | %c | %c\n", arr[0], arr[1], arr[2]);
    printf("----------\n");
    printf("%c | %c | %c\n", arr[3], arr[4], arr[5]);
    printf("----------\n");
    printf("%c | %c | %c\n", arr[6], arr[7], arr[8]);
}

int move(int spot) {
    char m = curPlayer == 1 ? 'x' : 'o';

    switch (spot) {
        // add a break duh...this is where I learned about https://en.wikipedia.org/wiki/Duff%27s_device
        // and the fact that a break is a good practice in a switch-case statement
        // because despite what I learned from Learn C Now, a break seems to be what my compiler needs
        // or else it doesn't ever do just one case statement, it applies all of them.
        case 1:
            board_arr[0] = m;
            break;
        case 2:
            board_arr[1] = m;
            break;
        case 3:
            board_arr[2] = m;
            break;
        case 4:
            board_arr[3] = m;
            break;
        case 5:
            board_arr[4] = m;
            break;
        case 6:
            board_arr[5] = m;
            break;
        case 7:
            board_arr[6] = m;
            break;
        case 8:
            board_arr[7] = m;
            break;
        case 9:
            board_arr[8] = m;
            break;
    }
}

bool canMove(void) {               // tests for a tie between players
    if (board_arr[0] == 0 || board_arr[1] == 0 || board_arr[2] == 0 || board_arr[3] == 0 ||
        board_arr[4] == 0 || board_arr[5] == 0 || board_arr[6] == 0 || board_arr[7] == 0 ||
        board_arr[8] == 0) {
        return true;
    } else {
        return false;
    }
}

bool checkWin(int curPlayer) {      // looks for a win condition for the current player
    if (board_arr[0] != 0 && board_arr[0] == board_arr[1] && board_arr[1] == board_arr[2]) {
        return true;
    } else if (board_arr[3] != 0 && board_arr[3] == board_arr[4] && board_arr[4] == board_arr[5]) {
        return true;
    } else if (board_arr[6] != 0 && board_arr[6] == board_arr[7] && board_arr[7] == board_arr[8]) {
        return true;
    } else if (board_arr[0] != 0 && board_arr[0] == board_arr[4] && board_arr[4] == board_arr[8]) {
        return true;
    } else if (board_arr[6] != 0 && board_arr[6] == board_arr[4] && board_arr[4] == board_arr[2]) {
        return true;
    } else if (board_arr[0] != 0 && board_arr[0] == board_arr[3] && board_arr[3] == board_arr[6]) {
        return true;
    } else if (board_arr[1]  != 0 && board_arr[1]  == board_arr[4] && board_arr[4] == board_arr[7]) {
        return true;
    } else if (board_arr[2] != 0 && board_arr[2] == board_arr[5] && board_arr[5] == board_arr[8]) {
        return true;
    }
    else {
        return false;
    }
}

bool isValid(int spot) {            // an invalid move means the spot is filled - this tests for open spots
    int m;
    switch (spot) {
        case 1:
            m = board_arr[0];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 2:
            m = board_arr[1];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 3:
            m = board_arr[2];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 4:
            m = board_arr[3];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 5:
            m = board_arr[4];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 6:
            m = board_arr[5];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 7:
            m = board_arr[6];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 8:
            m = board_arr[7];
            if ( m == 0 ) {
                return true;
            }
            break;
        case 9:
            m = board_arr[8];
            if ( m == 0 ) {
                return true;
            }
            break;
    }
    return false;
}
//
// Created by celestet on 2/16/2020.
//

