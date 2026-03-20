#include <stdio.h>
#include <conio.h>

int main () {
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf((n%5 == 0) && (n%7 == 0)? "\nDivisible" : "\nNot Divisible");
    return 0;
}