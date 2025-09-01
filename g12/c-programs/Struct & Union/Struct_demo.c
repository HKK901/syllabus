#include <stdio.h>
// Defining a struct
struct Student {
    int id;
    char name[20];
    float marks;
};
int main() {
    struct Student s1 = {101, "Harshit", 89.5}; // Initializing a struct
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks);
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}
