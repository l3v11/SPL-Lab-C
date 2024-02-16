// C program to calculate the percentage and grade of five subjects - Physics, Chemistry, Biology, Mathematics and Computer.

#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp;

    printf("Enter marks of five subjects:\n");
    printf("Physics: ");
    scanf("%d", &phy);
    printf("Chemistry: ");
    scanf("%d", &chem);
    printf("Biology: ");
    scanf("%d", &bio);
    printf("Mathematics: ");
    scanf("%d", &math);
    printf("Computer: ");
    scanf("%d", &comp);

    float res = (phy + chem + bio + math + comp) / 5.0;
    printf("\nPercentage: %.2f\n", res);

    if (res >= 90)
        printf("Grade: A\n");
    else if (res >= 80)
        printf("Grade: B\n");
    else if (res >= 70)
        printf("Grade: C\n");
    else if (res >= 60)
        printf("Grade: D\n");
    else if (res >= 40)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");

    return 0;
}
