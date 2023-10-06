#include <stdio.h>

int main()
{
    int i, j;
    int a;
    unsigned long long b, sum;
    unsigned long long f[31] = {0};     // To store even-value Fibonacci sequence.
    f[0] = 2;
    f[1] = 8;
    for (i=2 ; i<31 ; i++)
        f[i] = f[i-2] + f[i-1] * 4;     // It is easy to see that the formula of even-value Fibonacci sequence is f[i] = f[i-2] + f[i-1] * 4.
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%llu", &b);
        sum = 0;
        for (j=0 ; j<31 ; j++)
            if (f[j]<=b)        // Calculate the sum.
                sum += f[j];
        printf("%llu\n", sum);
    }
    return 0;
}
