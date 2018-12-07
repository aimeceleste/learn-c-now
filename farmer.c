/* 
 * F A R M E R 
 * 
 * The "farmer crossing a river" problem
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

#define BEL    7
#define K_ESC  27
#define NBYTES 80

/* 
 * Player data structure (bitfield) definition
 */
struct player_st {
    unsigned farmer : 1; 
    unsigned fox : 1; 
    unsigned hen : 1;
    unsigned corn : 1; 
};

struct player_st Player;  /* "generic" bitfield variable */

/* 
 * Function prototypes
 */
void Instruct(void);
int GetMove(int);
void DoMove(int);
int CheckMap(int);
int MadeIt(void);
void YouLose(void);
void PrintMap(void);

int main() {
    int bank;           /* 0 means farmer is on the left bank */
    int move;           /* key code for the requested move */
    int trips;          /* number of trips across the river */ 
    char reply[NBYTES];  /* user response */

    /* 
     * Set initial conditions. All items are on the 
     * west bank and no trips have been made. 
     */
    Player.farmer = Player.fox = Player.hen = Player.corn = 0;  
    bank = Player.farmer; 
    trips = 0; 

    printf("\n========== FARMER ===========\n");
    printf("Press Esc at any time to quit.\n\n");
    printf("Do you need instructions? (Enter Y or N): ");
    gets(reply);
    if (reply[0] == 'y' || reply[0] == 'Y' || reply[0] == '\0')
        Instruct();
    PrintMap();
    while (1) {
        move = GetMove(bank);
        DoMove(move);
        ++trips;
        bank = Player.farmer; 
        PrintMap();
        if (CheckMap(bank))
            YouLose();
        if (MadeIt())
            break;    
    }
    printf("Congratulations. You made it safely!\n");
    printf("The number of trips was %d\n", trips);

    return (0);
}

/* 
 * Instruct()
 * 
 * Display the rules of the game.
 */
void Instruct() {
    puts("A farmer must cross a river in a boat.");
    puts("They have a fox, a hen, and a bushel of corn.");
    puts("The farmer can only take one thing at a");
    puts("time in the boat. The fox can't be left");
    puts("alone with the hen because it'll eat it.");
    puts("Likewise, the hen can't be left with the corn.");
    puts("When the farmer is present, the animals are");
    puts("well behaved. You are the farmer. Attempt");
    puts("to get from the west bank of the river to");
    puts("the east bank with your baggage in tow while");
    puts("making the least number of trips");
}

int GetMove(int bank) {
    int key; 

    /* 
     * Prompt the user with only available commands.
     */
    printf("\nCommand: A(lone) ");
    if (Player.fox == bank) 
        printf("F(ox) ");
    if (Player.hen == bank)
        printf("H(en) ");
    if (Player.corn == bank)
        printf("C(orn) ");
    printf(": ");
    while (1) {
        key = toupper(getch());
        if (key == 'A')
            break;
        else if (key == 'F' && Player.fox == bank)
            break;
        else if (key == 'H' && Player.hen == bank)
            break;
        else if (key == 'C' && Player.corn == bank)
            break;
        else if (key == K_ESC) {
            putchar('\n');
            exit (0);
        }
        else 
            putchar(BEL);   /* bad command */
    }        
    putchar('\n');
    return (key);
}

void DoMove(int move) {
    switch (move) {
        case 'A':
            break;
        case 'F':
            Player.fox = !Player.fox;
            break;
        case 'H':
            Player.hen = !Player.hen;
            break;
        case 'C':
            Player.corn = !Player.corn;
            break;
    }
    Player.farmer = !Player.farmer;
}

/* 
 * CheckMap()
 * 
 * Verify that no hostile items are left alone.
 * Return 1 if they are, or 0 if not.
 */
int CheckMap(int bank) {
    int status = 0;

    if (Player.fox != bank && Player.hen != bank)
        status = 1; 
    if (Player.hen != bank && Player.corn != bank)
        status = 1;
    return (status);
} 

/* 
 * PrintMap()
 * 
 * Display the current map showing the positions 
 * of the farmer and the other items.
 */
void PrintMap() {
    char wc, ec; 
    
    /* the farmer */
    wc = ec = ' ';
    if (Player.farmer)
        ec = 'F';
    else 
        wc = 'F';
    printf("\n%c ^^^^^ %c\n", wc, ec);

    /* the fox */
    wc = ec = ' ';
    if (Player.fox)
        ec = 'f';
    else 
        wc = 'f';
    printf("%c ^^^^^ %c\n", wc, ec);

    /* the hen */
    wc = ec = ' ';
    if (Player.hen) 
        ec = 'h';
    else 
        wc = 'h';
    printf("%c ^^^^^ %c\n", wc, ec);
    
    /* the corn */
    wc = ec = ' ';
    if (Player.corn) 
        ec = 'c';
    else 
        wc = 'c';
    printf("%c ^^^^^ %c\n", wc, ec);
} 

/* 
 * MadeIt()
 * 
 * Determine whether all items have been safely 
 * transported to the east bank of the river. 
 */
int MadeIt() {
    int status;

    status = 0;
    if (Player.farmer && Player.fox && Player.hen && Player.corn)
        status = 1;
    
    return (status);
}

void YouLose() {
    printf("Sorry, you lose. ");
    if (Player.fox == Player.hen)
        printf("The fox ate the hen.\n");
    else if (Player.hen == Player.corn)
        printf("The hen ate the corn.");
    exit (1);
}
