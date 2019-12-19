#include <stdio.h>
#include <malloc.h>

int main() {

    char arr[4] = {'a', 'b', 'c', 'd'};
    char *arrPoint = arr;
    for (int i = 0; i < 4; i++) {
        /*arrPoint[i] = &arr[i];*/
        printf("%c ", *arrPoint);
        arrPoint++;
    }
    int *dynamicArrPoint;
    dynamicArrPoint = (char *) malloc(4 * sizeof(char));
    for (int j = 0; j < 4; j++) {
        dynamicArrPoint[j] = &arr[j];
        printf("\n%c ", dynamicArrPoint[j]);
    }
    free(dynamicArrPoint);
    return 0;
}