#include <stdio.h>

int main() {
    int i=1, n, sum=0, r;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The total is %d", sum);
    return 0;
}