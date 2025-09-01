#include <stdio.h>
// Defining nested structs
struct Address {
    char city[20];
    int pin;
};
struct Student {
    int id;
    char name[20];
    struct Address addr;  // Nested struct
};
int main() {
    // Creating a struct variable
    struct Student s1 = {101, "Harshit", {"Kathmandu", 44600}};
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("PIN Code: %d\n", s1.addr.pin);
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}
