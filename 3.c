//palindrom
#include <stdio.h>

int main() {
    int n, r, reverse=0, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    s=n;
    for(int i=0; n>0; i++){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    if(reverse == s){
        printf("It is a palindrome number: ");
    }
    else{
        printf("It is not a palindrome number: ");
    }
    return 0;
}