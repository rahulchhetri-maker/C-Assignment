#include <stdio.h>
#include <conio.h>

int main () {
    int l, b, a, p;
    printf("\nEnter length: ");
    scanf("%d", &l);
    printf("Enter breath: ");
    scanf("%d", &b);

    a = l*b;
    p = 2*(l+b);

    printf("\nThe area is %d\n", a);
    printf("The perimeter is %d", p);

    return 0;
}