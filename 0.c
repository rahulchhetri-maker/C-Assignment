//evenodd till the input is 0.
#include <stdio.h>

int main(){
    int n, fact=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<1){
    }
    else {
        while(n != 0){
            if(n%2 == 0){
                printf("It is even number.\n");
            }
            else{
                printf("It is odd number.\n");
            }
        printf("Enter a number: ");
        scanf("%d", &n);
        }
    }
return 0;
}