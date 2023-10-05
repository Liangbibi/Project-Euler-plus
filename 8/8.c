#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    int a, b, c;
    int max, sum;
    int number[1000] = {0};         // The max number of digits of N is 1000.
    char string[1000];
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d %d %s", &b, &c, string);
        max = 0;
        for (j=0 ; j<b ; j++)               // Transform the string to the number array that contains one digit each index.
            for (k=0 ; k<10 ; k++)
                if (string[j]==48+k)
                    number[j] = k;
        j = 0;
        while (j<=b-c) {        // Calculate the answer.
            sum = 1;
            k = 0;
            while (k<c) {
                sum *= number[j+k];
                k ++;
            }
            if (sum>max)
                max = sum;
            j ++;
        }
        printf("%d\n", max);
    }
    return 0;
}
