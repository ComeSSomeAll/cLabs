#include <stdio.h>


int main(){
    int a[7] = {10,20,30,40,50,60,70};
    for (int i=0; i<=6; i++)
        printf("%d ",a[i]);
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{1,0},{0,1}};
    int resultMultiply[2][2] = {{matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0],matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1]},
                                {matrix1[1][0]*matrix2[0][0] + matrix1[1][1]*matrix2[1][0],matrix1[1][0]*matrix2[0][1] + matrix1[1][1]*matrix2[1][1]}};
    printf("\n%d %d", resultMultiply[0][0],resultMultiply[0][1]);
    printf("\n%d %d", resultMultiply[1][0],resultMultiply[1][1]);
    return 0;
}