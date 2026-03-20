#include <stdio.h>

int main () {
    float n, total=0, avg, i=1, s;
    printf("\nHow many subjects are there? ");
    scanf("%f", &n);
    while (i<=n){
        printf("Enter marks: ");
        scanf("%f", &s);
        i++;
        total=total+s;
    }
    avg = total/n;
    printf("\nThe total marks is %f", total);
    printf("\n-The average marks is %f", avg);
    return 0;
}