#include <stdio.h>
#include <conio.h>

int main () {
    float rs, ic;
    printf("\nEnter the amount: ");
    scanf("%f", &rs);

    ic = rs/1.6;

    printf("\nIC= %f", ic);
    return 0;
}