#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(unsigned long long n);

int main()
{
    int i;
    int a;
    bool find;
    unsigned long long b, n;
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%llu", &n);
        b = 2;
        find = false;
        while (n!=1 && b<=sqrt(n)) {        // It is easy to know that we only interested in the first 2 max prime factors of one number
                                            // and the numbers we need to check are those smaller than or equal to sqrt(n).
            while (n%b==0 && isprime(b)) {
                n /= b;
                if (n==b) {
                    printf("%llu\n", n);    // If the first 2 max prime factors are equal, the max prime factor will be printf here.
                    find = true;
                }
            }
            b ++;
        }
        if (find==false)
            printf("%llu\n", n);        // If the first 2 max prime factors are not equal, the max prime factor will be printf here.
    }
    return 0;
}

bool isprime(unsigned long long n)      // To check whether the number that n divide is prime number. 
{
    unsigned long long i = 2;
    while (i<n) {
        if (n%i==0)
            return false;
        i ++;
    }
    return true;
}
