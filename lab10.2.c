#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number;
    scanf("%d", &number);
    int array[100];
    int count = 0, i;

    while (number)
    {
        array[count++] = number % 10;
        number /= 10;
    }

    for (i = count-1; i >= 0; --i)
        printf("%d ", array[i]);
    return 0;
}