#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n);       // To check whether the number is prime number.

int main()
{
    int i = 2;
    int a, b;
    int number = 0;
    int prime[10000] = {0};
    while (number<10000) {         // To establish the prime number array that contain ther first 10000 prime numbers (2 ~ 104729).
        if (is_prime(i)) {
            prime[number] = i;
            number ++;
        }
        i ++;
    }
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        printf("%d\n", prime[b-1]);     // Find and printf the bth prime number from the prime number array.
    }
    return 0;
}

bool is_prime(int n)
{
    int i;
    for (i=2 ; i<n ; i++)
        if (n%i==0)
            return false;
    return true;
}
