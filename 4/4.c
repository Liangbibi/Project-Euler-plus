#include <stdio.h>
#include <stdbool.h>

bool is_three_digit(int n);     // To check whether the second number is three digit.
bool is_palindrome(int n);      // To check whether the answer number is palindrome.

int main()
{
    int i, j, k;
    int a, b;
    bool find;
    scanf("%d", &a);
    for (i=0 ; i<a ; i++) {
        scanf("%d", &b);
        find = false;
        b --;       // To avoid b also satisfies the conditions, but this question asks us to find largest number "less than b."
        while (b>=101101 && find==false) {
            j = 101;
            while (j<=999 && find==false) {
                if (b%j==0) {
                    k = b / j;
                    if (is_three_digit(k) && is_palindrome(b)) {
                        printf("%d\n", b);
                        find = true;
                    }
                }
                j ++;
            }
            b --;
        }
    }
    return 0;
}

bool is_three_digit (int n)
{
    int i = 0;
    while (n!=0) {
        n /= 10;
        i ++;
    }
    if (i!=3)
        return false;
    return true;
}

bool is_palindrome(int n)
{
    int i = 0;
    int number[6] = {0};
    while (n!=0) {
        number[i] = n % 10;
        n /= 10;
        i ++;
    }
    if (number[0]!=number[5] || number[1]!=number[4] || number[2]!=number[3])
        return false;
    return true;
}
