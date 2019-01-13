/* 
 * Write a typedef statement that defines a type called SIGNAL and
 * declare a variable of this type. The definition should accomodate 
 * all the possible traffic signal patterns at a four-way intersection, 
 * including the possibility of a protected-turn-on-arrow from all four
 * directions. 
 * */ 
int main() {
    /* signal type definition - bitfield. I named these numbers for convenience
     * but they could just as easily be N S E W or letters or something. */ 
    typedef struct {
        unsigned red1 : 1;
        unsigned yellow1 : 1;
        unsigned green1 : 1;
        unsigned arrow1 : 1;
        unsigned red2 : 1;
        unsigned yellow2 : 1;
        unsigned green2 : 1;
        unsigned arrow2 : 1;
        unsigned red3 : 1;
        unsigned yellow3 : 1;
        unsigned green3 : 1;
        unsigned arrow3 : 1;
        unsigned red4 : 1;
        unsigned yellow4 : 1;
        unsigned green4 : 1;
        unsigned arrow4 : 1;
    } SIGNAL;

    SIGNAL fourWay; 
}