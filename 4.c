//Arrya evenorodd
#include <stdio.h>

int main() {
    int a[10], even=0, odd=0;

    for(int i=0; i<10; i++){
        printf("Enter a number: ");
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            even = even + 1;
        }
        else {
            odd = odd + 1;
        }
    }
    printf("\n\nThe total even number is %d", even);
    printf("\nThe total odd number is %d", odd);
    return 0;
}