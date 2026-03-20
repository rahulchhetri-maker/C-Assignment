#include <stdio.h>

int main() {
    int n, originalNum, r, sum = 0, digits = 0, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNum = n;

    for(int temp = n; temp > 0; digits++) {
        temp = temp / 10;
    }

    for(int temp = n; temp > 0; temp = temp / 10) {
        r = temp % 10;
        int power = 1;
        for(j = 1; j <= digits; j++) {
            power = power * r;
        }
        sum = sum + power;
    }

    if(sum == originalNum) {
        printf("\nIt is an Armstrong number.");
    } else {
        printf("\nIt is not an Armstrong number.");
    }

    return 0;
}
