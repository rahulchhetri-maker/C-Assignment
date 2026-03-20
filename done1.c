#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf(n>0 ? "positive" : n == 0 ? "it is Zero":"Negative" );
    return 0;
}