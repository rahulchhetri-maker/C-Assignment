#include <stdio.h>
int pro(int);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The answer is %d", pro (n));
}
int pro (int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*pro( n - 1 );
    }
}