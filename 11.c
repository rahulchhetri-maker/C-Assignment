//upperlower sum
#include <stdio.h>

int main() {
    int a[10][10], i, j, sum=0, add=0;

    for(i=0; i<3; i++){
        for(j=0; j<3;j++){
    printf("Enter a number: ");
    scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("\t%d", a[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i>j){
                sum=sum+a[i][j];
            }
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(j>i){
                add=add+a[i][j];
            }
        }
    }
    printf("\n\n");
    printf("The total is %d", add+sum);
}