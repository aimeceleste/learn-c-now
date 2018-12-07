/* 
 * U N I O N _ 2 
 * 
 * Use a union to access the same areas of memory
 * as either bytes or words at different times.
 */

#include <stdio.h> 

/* 
 * Data definitions
 */
struct bytes {
    unsigned char low;
    unsigned char high;
};

union word {
    unsigned short word;
    struct bytes byte;
};

int main(void) {
    union word data;
    unsigned short temp;

    /* 
     * Save a number in memory as a word and print it
     * in both decimal and hexadecimal formats.
     */ 
    data.word = 1000;
    printf("Word = %u (%04X hex)\n", data.word, data.word);

    /* 
     * Print out the values of the low and high bytes 
     * of the word independently.
     */
    printf("Low byte = %u (%02X hex)\n", data.byte.low, data.byte.low);
    printf("High byte = %u (%02X hex)\n", data.byte.high, data.byte.high);

    /* 
     * Print out the value of the word calcuated from 
     * the high and low bytes of the memory word. The 
     * calculation is equivalent to (256 * high) + low.
     */
    temp = (data.byte.high << 8) | data.byte.low;  
    printf("Calculated data word = %u (%04X hex)\n", temp, temp);

    return (0);
}

