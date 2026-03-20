//prime number 1 to 50 by using function.
#include <stdio.h>

int prime(int);

int main() {
    int n;
    prime(n);
    return 0;
}

int prime(int n) {
    int i, j, isPrime;
    for (i = 2; i <= 50; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}