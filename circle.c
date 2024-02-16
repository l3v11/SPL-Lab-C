// C program to find diameter, circumference and area of circle using function.

#include <stdio.h>

#define PI 3.1416

double diameter(int rad)
{
    return 2 * rad;
}

double circumference(int rad)
{
    return 2 * PI * rad;
}

double area(int rad)
{
    return PI * rad * rad;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Diameter of the circle is: %.2lf units.\n", diameter(n));
    printf("Circumference of the circle is: %.2lf units.\n", circumference(n));
    printf("Area of the circle is: %.2lf sq. units.\n", area(n));

    return 0;
}
