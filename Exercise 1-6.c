#include <stdio.h>
#define YES 1
#define NO 0
#define EOF -1

main () /*count lines, words, chars, in input */
{
    int c, nL, nW, nC, inword; /*declares c, Newline, NewWord, NewChar, inword */

    inword = NO; /* */

    nL = nW = nC = 0;
    
    if (argc != 2) {
        printf("Input of one file needed\n");
        return;
        }

    while ((c = getchar()) != EOF) { /*while the input given is NOT equal to -1*/
        ++nc;
        if (c == '\n')
            ++nL;
        if (c ==  ' ' || c == '\n' || c == '\t')
            inword = NO;
        else if (inword == NO) {
            inword = YES;
            ++nW;
        }
    }
    printf("%d %d %d\n", nL, nW, nC);
return;



}