#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int minuteTalk, subFee;
    float overLimitCost;
    float totalPayment = 0;
    printf("Enter call duration: ");
    scanf("%d", &minuteTalk);
    printf("\nEnter subscription fee: ");
    scanf("%d", &subFee);
    printf("\nEnter cost per minute over the limit: ");
    scanf("%f", &overLimitCost);

    float min = subFee / 499;
    if (min > overLimitCost)
        printf("Invalid data");
    if (minuteTalk > 499)
        totalPayment += ((minuteTalk - 499)*overLimitCost);
    totalPayment += subFee;
    printf("Your payment is %f", totalPayment);
    return 0;
}