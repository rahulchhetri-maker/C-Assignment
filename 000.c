//prime number
#include <stdio.h>

 int main(){
    int n, fact=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n<2){
        printf("It is neither prime number nor composit.");
    }
    else{
        for(int i=2; i<=n/2; i++){
            if(n%i == 0){
                fact=1;
            }
        }
    if (fact == 1){
        printf("It is composit number.");
    }
    else {
        printf("It is prime number.");
    }
    }
return 0; 
}