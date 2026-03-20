#include <stdio.h>
#include <conio.h>

int main () {
    float p, n, r, SI;
    printf("\nEnter Principle: ");
    scanf("%f", &p);
    printf("Enter Time: ");
    scanf("%f", &n);
    printf("Enter Rate of interest: ");
    scanf("%f", &r);
    
    SI = (p*r*n)/100;

    printf("\nThe simple interest is %f", SI);
    return 0;
}