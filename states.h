/* 
 * states.h
 *  
 * Header file for the STATES program
 */

/* 
 * Data structure declaration and initialization
 * 
 * Initialize the state data in the array of data structures. 
 * The list includes only those states the author has called "home."
 * If your state is not inclued, simply add the required data.
 */

struct state_st {
    char *code;               /* postal code for state name */
    char *name;               /* state name */
    char *capital;            /* capital city */
    unsigned population;      /* in thousands */
    unsigned long area;       /* in square miles */
} States[] = {
    { "CO", "Colorado", "Denver", 2208, 104247 },
    { "MA", "Massachusetts", "Boston", 5689, 8257 }, 
    { "MD", "Maryland", "Annapolis", 3923, 10577 }, 
    { "RI", "Rhode Island", "Providence", 950, 1214 }
};

#define NSTATES sizeof States / sizeof (struct state_st)