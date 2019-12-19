#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // initialization variables
    char s1, s2;
    scanf("%c,%c", &s1, &s2);
    const char* first = s1;
    const char* second = s2;
    // memory allocation
    char* buff = (int*) malloc(strlen(first) + strlen(second) + 1);
    // concatenation strigns
    strcat(buff, first);
    strcat(buff, second);
    printf("%s\n", buff);
    free(buff);
    // comparison stirngs
    if (strcmp(s1, s2) == 0)
        printf("The strings are identical");
    else
        printf("Strings are different");
    // copying strings
    strcpy(s1, s2);
    printf("%s", s1);
    // lenght string
    printf(strlen(s1));
    // char search
    char ch;
    scanf("%c", &ch);
    if (strchr(s1, ch) == NULL)
        printf("Symbol not found");
    else
        printf("Symbol on positon #  % d\n", strchr(s1, ch) - s1 + 1);
}