#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, j = 2;
    int a, b;
    int triangle_number[41040] = {0}, divisors[41040] = {0};    // It can be shown that the 41040th triangle number has 1024 divisors,
                                                                // and this triangle number is the first that has more than 1000 divisors.
    triangle_number[0] = 1;
    while (i<41040) {          // Establish the array of triangle number.
        triangle_number[i] = triangle_number[i-1] + j;
        i ++;
        j ++;
    }
    for (i=0 ; i<41040 ; i++)           // Calculate how many divisors they have for each triangle number.
        for (j=1 ; j<=sqrt(triangle_number[i]) ; j++) {
            if (triangle_number[i]%j==0 && j!=sqrt(triangle_number[i]))
                divisors[i] += 2;
            if (triangle_number[i]%j==0 && j==sqrt(triangle_number[i]))
                divisors[i] ++;
        }
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        for (j=0 ; j<41040 ; j++)
            if (divisors[j]>b) {
                printf("%d\n", triangle_number[j]);
                break;
            }
    }
    return 0;
}
