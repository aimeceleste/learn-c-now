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
struct board_st b = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
};

/* Function primitives */ 
int drawBoard(struct board_st b);       /* draws the board */ 
int move(int spot, char val);           /* a move puts a value (X or O) into the designated spot */  
bool canMove(void);                     /* determines whether there is any legal move. Returns false if no legal moves available */ 

int main(void) {
    // flip a coin / random number gen a first mover OR select always human moves first
    // X = human O = computer (temp: human move 2)
    int numPlayers = 2;
    int curPlayer = 0;

    while (1) {     // begin the play loop
        printf("Pick a spot:\n");
        drawBoard(b);
        // check for legal moves, if none it's a tie 
        if (canMove() = false) {
            printf("You have tied.");
            break;
        }
        // ascii X = 88, O = 79
            
        // move a player 
        // check if win - if yes, break
        // switch player
        // back to front of loop if not win

    }
    return 0;
}

int drawBoard(struct board_st b) {
    printf("%d | %d | %d\n", b.spot1, b.spot2, b.spot3);
    printf("----------\n");
    printf("%d | %d | %d\n", b.spot4, b.spot5, b.spot6);
    printf("----------\n");
    printf("%d | %d | %d\n", b.spot7, b.spot8, b.spot9);
}

int move(int spot, char val) {
    switch (spot) {
        case 1:
            b.spot1 = val;
        case 2:
            b.spot2 = val;
        case 3: 
            b.spot3 = val;
        case 4: 
            b.spot4 = val;
        case 5:
            b.spot5 = val;
        case 6: 
            b.spot6 = val;
        case 7: 
            b.spot7 = val;
        case 8: 
            b.spot8 = val;
        case 9: 
            b.spot9 = val;
    }
}

bool canMove(void) {
    if (b.spot1 < 79) {
        return true;
    } else if (b.spot2 < 79) {
        return true;
    } else if (b.spot3 < 79) {
        return true;
    } else if (b.spot4 < 79) {
        return true;
    } else if (b.spot5 < 79) {
        return true;
    } else if (b.spot6 < 79) {
        return true;
    } else if (b.spot7 < 79) {
        return true;
    } else if (b.spot8 < 79) {
        return true;
    } else if (b.spot9 < 79) {
        return true;
    } else {
        return false;
    }
}