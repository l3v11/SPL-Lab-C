// C program to find all roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("The quadratic equation: ax^2 + bx + c\n");
    printf("Enter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = b * b - 4 * a * c;
    float root1, root2, realval, imgval;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root1: %.2f\n", root1);
        printf("Root2: %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);

        printf("Root = %.2f\n", root1);
    }
    else
    {
        realval = -b / (2 * a);
        imgval = sqrt(-discriminant) / (2 * a);

        printf("Root1 = %.2f + %.2f\n", realval, imgval);
        printf("Root2 = %.2f + %.2f\n", realval, imgval);
    }

    return 0;
}
