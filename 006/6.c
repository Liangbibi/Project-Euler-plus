#include <stdio.h>

int main()
{
    int i, j;
    int a, b;
    unsigned long long sum1, sum2;      // sum1 = 1^2 + 2^2 + ... + n^2 and sum2 = (1 + 2 + ... + n)^2
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        sum1 = 0;
        sum2 = 0;
        for (j=1 ; j<=b ; j++) {
            sum1 += j * j;          // sum1 = 1^2 + 2^2 + ... + n^2
            sum2 += j;              // sum2 = 1 + 2 + ... + n
        }
        sum2 *= sum2 ;              // sum2 = (1 + 2 + ... + n)^2
        printf("%llu\n", sum2 - sum1);
    }
    return 0;
}
