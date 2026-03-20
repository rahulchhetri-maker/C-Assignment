#include <stdio.h> //Program to find the sum of 2 number.
#include <conio.h>

int main () {
    int a, b, sum;
    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("\nThe answer is %d", sum);
    return 0;
}