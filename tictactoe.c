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
 * Refactoring to remove the struct and to add some limited AI for the computer player.
 */
#include <stdio.h>
#include <stdbool.h>

/* Board array */
int board_arr[9];

/* Global variables */
// flip a coin / random number gen a first mover OR select always human moves first
// X = human O = computer (temp: human move 2)
int numPlayers = 2;
// first player is 88 for X
int curPlayer = 1;
int counter = 1;

/* Function primitives */
int drawBoard(int board_arr[9]);       /* draws the board */
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
        // back to front of loop if not win
    }

    return 0;
}

int drawBoard(int board_arr[]) {

int i=0;
for (i; board_arr[i]; i++ )
    //TODO: I'm sure this doesn't work with the nine chars and the board_arr index
    printf("%c | %c | %c\n----------\n %c | %c | %c\n----------\n %c | %c | %c\n", board_arr[i+1]);
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
            board_arr[81] = m;
            break;
    }
}

bool canMove(void) {
    if (board_arr[0] == 0 || board_arr[1] == 0 || board_arr[2] == 0 || board_arr[3] == 0 ||
        board_arr[4] == 0 || board_arr[5] == 0 || board_arr[6] == 0 || board_arr[7] == 0 ||
        board_arr[8] == 0) {
        return true;
    } else {
        return false;
    }
}

bool checkWin(int curPlayer) {
    if (board_arr[0] != 0 && board_arr[0] == board_arr[1] && board_arr[1] == board_arr[2]) {
        //printf("testme");
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
        // printf("Condition null");
        return false;
    }
}

bool isValid(int spot) {
    int m = 0;
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

