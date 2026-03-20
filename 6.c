//array greatest smallest
#include <stdio.h>

int main() {
    int a[3][3], i, j, max, min;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];
    min = a[0][0];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(max <a [i][j]){
                max=a[i][j];
            }
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    printf("\n\nThe greatest number is %d", max);
    printf("\nThe smallest number is %d", min);
    return 0;
}