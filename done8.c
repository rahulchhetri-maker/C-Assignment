#include <stdio.h>

int main(){
    int i = 1, n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n", i);
        fact= fact*i;
        i++;
    }
    printf("\nThe answer is %d", fact);
    return 0;
}