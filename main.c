#include <stdio.h>

int main()
{
    int age;
    float gpa;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("\nAge: %d", age);
    printf("\nGPA: %.2f", gpa);
    printf("\nGrade: %c", grade);

    return 0;
}
