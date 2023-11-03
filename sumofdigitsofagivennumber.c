#include <stdio.h>

int main() {
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("The sum of digits of %d is %d.\n", number, sum);

    return 0;
}
