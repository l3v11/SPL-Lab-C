// C Program to make a smart calculator with user defined funtion.

#include <stdio.h>
#include <math.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mul(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}

float pwr(float base, float exponent)
{
    return pow(base, exponent);
}

float sqroot(float num)
{
    return sqrt(num);
}

float absval(float num)
{
    return fabs(num);
}


int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("Smart Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Absolute Value\n");
        printf("0. Exit\n");

        printf("Enter your choice (0-7): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting the calculator. Goodbye!");
            break;
        }

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = sub(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = mul(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0)
            {
                result = div(num1, num2);
                printf("Result: %.2f\n", result);
            }
            else
            {
                printf("ERROR: Division by zero.\n");
            }
            break;
        case 5:
            printf("Enter the base and exponent: ");
            scanf("%f %f", &num1, &num2);
            result = pwr(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = sqroot(num1);
            printf("Result: %.2f\n", result);
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%f", &num1);
            result = absval(num1);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("ERROR: Invalid choice.\n");
            break;
        }
    }

    return 0;
}
