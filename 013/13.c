#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, n;
    int answer[53] = {0};           // To store the each digit of answer, and there are max 53 digits.
    char string[50];                // Because int ~ unsigned long long can't store any 50-digits number, we use string to storage.
    scanf("%d", &n);
    for (i=0 ; i<n ; i++) {
        scanf("%s", string);
        for (j=0 ; j<50 ; j++)
            for (k=0 ; k<10 ; k++)
                if (string[j]==48+k)        // Input the number and add it to answer by adding each digit to the right index respectively.
                    answer[j+3] += k;
        for (j=52 ; j>=0 ; j--)         // To check whether there is any digit is more than 10.
            if (answer[j]>=10) {
                answer[j-1] += answer[j] / 10;
                answer[j] %= 10;
            }
    }
    j = 0;
    while (answer[j]==0)
        j ++;
    for (i=j ; i<j+10 ; i++)            // Printf the first 10 digit in the answer.
        printf("%d", answer[i]);
    printf("\n");
    return 0;
}
