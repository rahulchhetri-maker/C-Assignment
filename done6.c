#include <stdio.h>
#define FU 100
#define FUP 5
#define SU 200
#define SUP 7
#define BU 300
#define BUP 9
#define MC 300
int main () {
    int n, fp, sp, bp;
    printf("Enter Unit: ");
    scanf("%d", &n);
    fp = (n*5)+MC;
    sp = (FU*FUP)+((n-FU)*7)+MC;
    bp = (FU*FUP)+(SU*SUP)+((n-BU)*BUP)+MC;
    if (n<=0){
        printf("The amount is null");
    }
    else if (n<=FU){
        printf("The amount is %d", fp);
    }
    else if (n<=BU){
        printf("The amount is %d", sp);
    }
    else {
        printf("The amount is %d", bp);
    }
    return 0;
}