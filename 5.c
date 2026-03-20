#include <stdio.h>

int main() {
    int a[10], i, search, fact=0;

    for(i=0; i<10; i++){
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    printf("\nFind number: ");
    scanf("%d", &search);

    for(i=0; i<10; i++){
        if(search == a[i])
        fact =1;
    }

    if(fact == 1){
        printf("It is avilable.");
    }
    else{
        printf("It is not avilable.");
    }
    return 0;
}