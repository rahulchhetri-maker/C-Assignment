//Fibonacci series
#include <stdio.h>

int main() {
    int i, n, sum=0, firstnum=0, secondnum=1, next;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\t%d", firstnum);
        next=firstnum+secondnum;
        firstnum=secondnum;
        secondnum=next;
    }
    return 0;
}