#include <stdio.h>

int main()
{
    int i, j, k, l;
    int a, b;
    int max;
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        max = -1;
        if (b%2==0)
            j = b / 2 - 1;          // If b is even, the largest value of one side of triangle is b / 2 - 1;
        else if (b%2==1)
            j = b / 2;              // If b is odd, the largest value of one side of triangle is b / 2;
        k = j - 1;
        l = b - j - k;
        while (j>b/3) {         // Because (k, l) = (a, b) and (b, a) are equal, thus, we let k always greater than or equal to l,
                                // and that it is impossible for there are two numbers are equal, thus we let j > k > l.
            while (j>k && j>l && k>l) {
                if (j*j==k*k+l*l)           // To check whether (j, k, l) is a Pythagorean triplet.
                    if (j*k*l>max)
                        max = j * k * l;
                k --;
                l ++;
            }
            j --;
            k = j - 1;
            l = b - j - k;
        }
        printf("%d\n", max);
    }
    return 0;
}
