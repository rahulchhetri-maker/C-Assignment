#include <stdio.h>
#include <conio.h>

int main () {
    int a, b, c, great, greatest;
    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    great = a>b ? a:b;
    greatest = great>c ? great:c;
    
    printf("\nThe greatest number is %d", greatest);

    return 0;
}