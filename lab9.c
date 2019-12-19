#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[80] = { '\0' };
    int countNumber = 0, countUpper = 0, countLower = 0;
    // get string
    printf("\n Input line: \n");
    gets(a);
    // counting symbols
    for (int i = 0; i <= strlen(a); i++)
    {
        if (a[i] >= '0' && a[i] <= '9') countNumber++;
        else if (a[i] >= 'A' && a[i] <= 'Z') countUpper++;
        else if (a[i] >= 'a' && a[i] <= 'z') countLower++;
    }
    // output

    printf("\n Number = %d \n Upper = %d \n Lower = %d", countNumber, countUpper, countLower);

}
