#include <stdio.h>
#include <string.h>

// Define a structure to represent a "class"
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function to display student details
void display(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Input student details
    printf("Enter name: ");
    gets(s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Display student details
    printf("\nStudent Details:\n");
    display(s1);

    return 0;
}
