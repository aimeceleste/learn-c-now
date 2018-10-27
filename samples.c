10 /* Nonzero -- yields a true result */
!10 /* Yields a false (logically opposite) result */

int a = 10, b = 5, c = 0;
a && b   /* True -- both are nonzero */
a && c   /* False -- one operand is zero */
a || c   /* True -- one operand is nonzero */

int a = 10, b = 5;
int i = 2, j = 9; 

a > b && i < j  /* True */
a < b || i > j  /* False */

(a > b || i > j) && a < i   /* False */
a > b || i > j && a < i     /* True */

int x = 8000;
char zed = 'z';
int avg = (3 + 11 + 21 + 66)/2;
int diff = a - b;