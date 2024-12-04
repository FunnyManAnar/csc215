#include <stdio.h>


main(int argc,char argv) 



char *argv;
{
    int i, total;

    total = 0;

    for (i=1; i <= argc; ++i) {
        total = total +  argv[i];
        printf(total);

        if (argv[i] == ^something not a number^ && *argv[i] != '0') {
            printf("this ain't a number", argv[i]);
        }
    }
    printf(total);

}