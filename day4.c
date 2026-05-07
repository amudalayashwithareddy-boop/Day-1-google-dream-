#include <stdio.h>

int main() {
    // Day 4/1460 - Sisters Gang Input
    // Topic: scanf - User nunchi data teesukovadam

    char name[50];
    int age;
    float cgpa;

    printf("=== Sisters Gang Biodata Form ===\n");

    printf("Enter your name: ");
    scanf("%s", name); // %s = string kosam

    printf("Enter your age: ");
    scanf("%d", &age); // %d = integer, & = address

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa); // %f = float

    printf("\n--- Sisters Gang Data Saved ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("CGPA: %.2f\n", cgpa);
    printf("\nDay 4/1460 Complete - Google SWE 2030 🚀");

    return 0;
}