//reverse
#include <stdio.h>

int main() {
    int n, reverse=0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; n>0; i++) {
        r = n % 10;                 
        reverse = reverse * 10 + r; 
        n = n / 10;                 
    }

    printf("The reverse version is %d", reverse);

    return 0;
}
