#include <stdio.h>

int main()
{
    int i, j;
    unsigned long long a, b;
    unsigned long long sum;
    scanf("%llu", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%llu", &b);
        sum = 0;
        b --;       // to avoid add the term b.
        j = b%3;
        sum += (3+b-j)*(b-j)/6;     // add every terms that divide 3.
        j = b%5;
        sum += (5+b-j)*(b-j)/10;    // add every terms that divide 5.
        j = b%15;
        sum -= (15+b-j)*(b-j)/30;   // minus every terms that divide 15.
        printf("%llu\n", sum);
    }
    return 0;
}
