#include <stdio.h>

int main () {
    int a , hr , min , sec , rem ;
    printf("Enter Second: ");
    scanf("%d", &a);
    hr = a / 3600;
    rem = a % 3600;
    min = rem / 60;
    sec = a % 60;
    printf("Hour: %d\nMinutes: %d\nSecond: %d", hr  , min , sec);
    return 0;
}