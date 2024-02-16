// C program to derive the concept of structure and union.

#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

union Number
{
    float ict;
    float math;
};

int main()
{
    struct Student student;
    strcpy(student.name, "Samiul Quoreshi Sourav");
    student.id = 2118010;

    printf("Student ID: %d\n", student.id);
    printf("Student name: %s\n\n", student.name);

    union Number num;
    num.ict = 95.5;
    num.math = 98;

    printf("ICT marks: %.2f\n", num.ict);
    printf("Math marks: %.2f\n", num.math);

    return 0;
}