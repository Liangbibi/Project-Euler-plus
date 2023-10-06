#include <stdio.h>        // This code is as same as Project-Euler 11.c

int main()
{
    int i, j, k;
    int max = 0;
    int number[20][20] = {0};
    for (i=0 ; i<20 ; i++)
        for (j=0 ; j<20 ; j++)
            scanf("%d", &number[i][j]);
    for (i=0 ; i<17 ; i++)              // up to down
        for (j=0 ; j<20 ; j++) {
            k = number[i][j] * number[i+1][j] * number[i+2][j] * number[i+3][j];
            if (k>max)
                max = k;
        }
    for (i=0 ; i<20 ; i++)              // left to right
        for (j=0 ; j<17 ; j++) {
            k = number[i][j] * number[i][j+1] * number[i][j+2] * number[i][j+3];
            if (k>max)
                max = k;
        }
    for (i=0 ; i<17 ; i++)              // left up to right down
        for (j=0 ; j<17 ; j++) {
            k = number[i][j] * number[i+1][j+1] * number[i+2][j+2] * number[i+3][j+3];
            if (k>max)
                max = k;
        }
    for (i=0 ; i<17 ; i++)              // left down to right up
        for (j=20 ; j>=3 ; j--) {
            k = number[i][j] * number[i+1][j-1] * number[i+2][j-2] * number[i+3][j-3];
            if (k>max)
                max = k;
        }
    printf("%d\n", max);
    return 0;
}
