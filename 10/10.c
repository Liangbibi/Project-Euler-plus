#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n);           // To check whether the number is prime number.

int main()
{
    int i = 3, j = 1;
    int a, b;
    unsigned long long sum[78498] = {0};
    int prime[78498] = {0};
    sum[0] = 2;                 // Initialize the prime[0] and sum[0] for help us establish the array as below, both of them equal 2.
    prime[0] = 2;
    while (i<=1000000) {        // Establish the array of sum of prime numbers less than or equal to nth prime number;
        if (is_prime(i)) {
            sum[j] = sum[j-1] + i;
            prime[j] = i;
            j ++;
        }
        i ++;
    }
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        if (b==1)               // If b = 1, it will not printf the correct value (0) by the way shown below.
            printf("0\n");
        else
            for (j=0 ; j<78498 ; j++) {
                if (b<prime[j]) {
                    printf("%llu\n", sum[j-1]);
                    break;
                }
                else if (j==78497)      // If b > prime[78497], it will not printf any value, thus printf sum[78497] if b > prime[78497].
                    printf("%llu\n", sum[78497]);
            }
    }
    return 0;
}

bool is_prime(int n)
{
    int i = 2;
    while (i<=sqrt(n)) {
        if (n%i==0)
            return false;
        i ++;
    }
    return true;
}
