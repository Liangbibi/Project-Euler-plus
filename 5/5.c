#include <stdio.h>

int main()
{
    int i, j, k;
    int a, b;
    int prime[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};   // The array of prime numbers less than or equal to 40.
    unsigned long long answer;
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        k = b;
        answer = 1;
        for (j=0 ; j<12 ; j++) {
            b = k;
            while (b>=prime[j]) {       // For all prime numbers, we find the largest power and multiply these to calculate the answer.
                b /= prime[j];
                answer *= prime[j];
            }
        }
        printf("%llu\n", answer);
    }
    return 0;
}
