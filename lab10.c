#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NOD(int n1, int n2) {
    int div;
    if (n1 == n2)   // checking for equality
        return n1;
    int d = n1 - n2; // find number dif
    if (d < 0)
    {
        d = -d;     // change sign if num dif < 0
        div = NOD(n1, d); // NOD for less numbers
    }
    else
    {
        div = NOD(n2, d); // if num dif > 0, NOD for less numbers
    }
    return div;
}

int NOK(int n1, int n2) {
    return n1 * n2 / NOD(n1, n2);
}

int main() {
    // initialization variables
    int first, second;
    scanf("%d", &first);
    scanf("%d", &second);
    int res, res2;
    // assignment
    res = NOD(first, second);
    res2 = NOK(first, second);
    // output
    printf("NOD = %d", res);
    printf("NOK = %d", res2);
    return 0;
}