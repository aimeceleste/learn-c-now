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
 */
#include <stdio.h> 
#include <stdbool.h>

/* Board structure */
struct board_st {
    int spot1;
    int spot2;
    int spot3;
    int spot4;
    int spot5;
    int spot6;
    int spot7;
    int spot8;
    int spot9;
};

/* Global board structure */
struct board_st b = {};

/* Global variables */ 
// flip a coin / random number gen a first mover OR select always human moves first
// X = human O = computer (temp: human move 2)
int numPlayers = 2;
// first player is 88 for X
int curPlayer = 1;
int counter = 1; 

/* Function primitives */ 
int drawBoard(struct board_st* b);      /* draws the board */
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
            drawBoard(&b);
            printf("You have tied.\n");
            break; 
        } 
        drawBoard(&b);
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
            drawBoard(&b);
            printf("Player %i has won - congrats!\n", curPlayer);
            break;
        } 

        // swap players
        curPlayer = curPlayer == 1 ? 2 : 1 ; 
        // back to front of loop if not win 
    } 

    return 0;
}

int drawBoard(struct board_st* b) {

    char spot1 = (*b).spot1 == 0 ? '1' : b->spot1;
    char spot2 = (*b).spot2 == 0 ? '2' : b->spot2;
    char spot3 = (*b).spot3 == 0 ? '3' : b->spot3;
    char spot4 = (*b).spot4 == 0 ? '4' : b->spot4;
    char spot5 = (*b).spot5 == 0 ? '5' : b->spot5;
    char spot6 = (*b).spot6 == 0 ? '6' : b->spot6;
    char spot7 = (*b).spot7 == 0 ? '7' : b->spot7;
    char spot8 = (*b).spot8 == 0 ? '8' : b->spot8;
    char spot9 = (*b).spot9 == 0 ? '9' : b->spot9;

    printf("%c | %c | %c\n", spot1, spot2, spot3);
    printf("----------\n");
    printf("%c | %c | %c\n", spot4, spot5, spot6);
    printf("----------\n");
    printf("%c | %c | %c\n", spot7, spot8, spot9);
}

int move(int spot) {
    char m = curPlayer == 1 ? 'x' : 'o';
    
    switch (spot) {
        // add a break duh...this is where I learned about https://en.wikipedia.org/wiki/Duff%27s_device
        // and the fact that a break is a good practice in a switch-case statement
        // because despite what I learned from Learn C Now, a break seems to be what my compiler needs
        // or else it doesn't ever do just one case statement, it applys all of them. 
        case 1:
            b.spot1 = m;
            break;
        case 2:
            b.spot2 = m;
            break;
        case 3:
            b.spot3 = m;
            break;
        case 4:
            b.spot4 = m;
            break;
        case 5:
            b.spot5 = m;
            break;
        case 6:
            b.spot6 = m;
            break;
        case 7:
            b.spot7 = m;
            break;
        case 8:
            b.spot8 = m;
            break;
        case 9:
            b.spot9 = m;
            break;
    }
}

bool canMove(void) { 
    if (b.spot1 == 0 || b.spot2 == 0 || b.spot3 == 0 || b.spot4 == 0 ||
            b.spot5 == 0 || b.spot6 == 0 || b.spot7 == 0 || b.spot8 == 0 ||
            b.spot9 == 0) {
        return true; 
    } else {
        return false;
    }
}

bool checkWin(int curPlayer) {
    if (b.spot1 != 0 && b.spot1 == b.spot2 && b.spot2 == b.spot3) {
        return true; 
    } else if (b.spot4 != 0 && b.spot4 == b.spot5 && b.spot5 == b.spot6) {
        return true; 
    } else if (b.spot7 != 0 && b.spot7 == b.spot8 && b.spot8 == b.spot9) {
        return true; 
    } else if (b.spot1 != 0 && b.spot1 == b.spot5 && b.spot5 == b.spot9) {
        return true; 
    } else if (b.spot7 != 0 && b.spot7 == b.spot5 && b.spot5 == b.spot3) {
        return true; 
    } else if (b.spot1 != 0 && b.spot1 == b.spot4 && b.spot4 == b.spot7) {
        return true; 
    } else if (b.spot2 != 0 && b.spot2 == b.spot5 && b.spot5 == b.spot8) {
        return true; 
    } else if (b.spot3 != 0 && b.spot3 == b.spot6 && b.spot6 == b.spot9) {
        return true; 
    }
    else {
        return false;
    }
}

bool isValid(int spot) {
    int m = 0; 
    switch (spot) {
        case 1:
            m = b.spot1;
            if ( m == 0 ) {
                return true;
            }
            break;
        case 2:
            m = b.spot2;
            if ( m == 0 ) {
                return true;
            }
            break;
        case 3: 
            m = b.spot3;
            if ( m == 0 ) {
                return true;
            }
            break;
        case 4: 
            m = b.spot4;
            if ( m == 0 ) {
                return true;
            }            
            break;
        case 5:
            m = b.spot5;
            if ( m == 0 ) {
                return true;
            }            
            break;
        case 6: 
            m = b.spot6;
            if ( m == 0 ) {
                return true;
            }            
            break;
        case 7: 
            m = b.spot7;
            if ( m == 0 ) {
                return true;
            }
            break;
        case 8: 
            m = b.spot8;
            if ( m == 0 ) {
                return true;
            }            
            break;
        case 9: 
            m = b.spot9;
            if ( m == 0 ) {
                return true;
            }            
            break;
    }
    return false;
}
