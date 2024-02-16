// C program to derive the concept of ternary operator and switch statement.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Using ternary operator: ");
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    printf("Using switch statement: ");
    switch (num % 2) {
        case 0:
            printf("Even\n");
            break;
        case 1:
            printf("Odd\n");
            break;
    }

    return 0;
}
