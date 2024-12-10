#include <stdio.h>
#define  MAXLINE 80

main(argc, argv)
int argc;
char* argv[];
{
    FILE *file;
    int ch, LNum, ChrNum, inword;
    char word[MAXLINE];

    if (argc != 2) {
        printf("Usage: wdatime <infile>\n");
        exit();
    }

    if ((file = fopen(argv[1], "r")) == NULL) {
        printf("Can’t open %s\n", argv[1]);
        exit();
    }

    inword = 0;
    while ((ch = fgetc(file)) != EOF) {

        



        if (ch == ' ' || ch == '\n' || ch == '\t'|| ch == ) {

            if (inword) {
                word[wpos] = '\0';
                printf("%s\n", word);
                wpos = 0;
            } 

            inword = 0;

        } else {            /*  ch is not whitespace */
            inword = 1;
            word[wpos++] = ch;
        }

    }
    fclose(infp);
    if (wpos) {             /* inword when EOF encountered, print last word */
        word[wpos] = '\0';
        printf("%s\n", word);
    }
}