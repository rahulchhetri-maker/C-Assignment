//Transpose
#include <stdio.h>

int main() {
    int a[10][10], i, j, trans[10][10];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a number: ");
            scanf("%d",&a[i][j]);
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
            trans[j][i]=a[i][j];
        }
    }
    printf("\n");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("\t%d", trans[i][j]);
        }
    }
    return 0;
}