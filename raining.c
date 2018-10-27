/* 
 * R A I N I N G 
 * 
 * Tell the user what to do based on the weather conditions.
 */

#include <stdio.h>

int main() {
    int raining;
    int window_open;

    /* 
     * Collect needed data. 
     */
    printf("Is it raining outside? (0 = NO, 1 = YES): ");
    scanf("%d", &raining);
    printf("Is the window open? (0 = NO, 1 = YES): ");
    scanf("%d", &window_open);

    /* 
     * Give advice based on the conditions. Offer no 
     * advice if it's raining and the window is closed.
     */
    if (raining == 1) {
        if (window_open == 1)
            puts("Close the window.");
    }  
    else 
        puts("Good day for a walk.");

    return (0);
}