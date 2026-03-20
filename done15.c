#include <stdio.h>
int main () {
    float c, dl, cf, pc, math, tol, avg, per;
    printf("Enter Marks\n");
    printf("\nC Programming Language: ");
    scanf("%f", &c);
    printf("Digital Logic: ");
    scanf("%f", &dl);
    printf("Computer Fundamental and Applications: ");
    scanf("%f", & cf);
    printf("Professional Communication: ");
    scanf("%f", &pc);
    printf("Maths: ");
    scanf("%f", &math);
    tol = c + dl + cf+pc+math;
    avg = tol/5;
    printf("\nThe total marks is %f", tol);
    printf("\nThe average marks is %f\n", avg);
    if (avg >= 90){
        printf("\nDistinction");
    }
    else if (avg >= 80){
        printf("\nFirst Division");
    }
    else if (avg >= 60){
        printf("\nSecond Division");
    }
    else if (avg >= 40){
        printf("\nThird Division");
    }
    else {
        printf("\nFail");
    }
    return 0;
}