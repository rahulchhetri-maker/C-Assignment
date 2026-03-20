//even sum and odd pro
#include <stdio.h>

int main() {
    int a[10][10], sum=0, pro=1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j] % 2 == 0){
                sum=sum+a[i][j];
            }
            else{
                pro=pro*a[i][j];
            }
        }
    }

    printf("\n\nThe sum is %d", sum);
    printf("\nThe product is %d", pro);
    return 0;
}
