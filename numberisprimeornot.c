#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }

    if (num == 2) {
        return 1; // Prime
    }

    int sqrtNum = sqrt(num);

    for (int i = 2; i <= sqrtNum; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a composite number.\n", number);
    }

    return 0;
}
