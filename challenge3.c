#include <stdio.h>
#include <stdbool.h>

bool isPremier(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    if (isPremier(number)) {
        printf("Your number is prime.\n");
    } else {
        printf("Not prime.\n");
    }

    return 0;
}
