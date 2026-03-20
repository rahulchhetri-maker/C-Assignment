#include <stdio.h>

int main() {
    int i=1, sum=0;
    while(i<=10){
        sum = sum + i;
        printf("%d\n", i);
        i++;
    }
    printf("\nThe total is %d", sum);
    return 0;
}