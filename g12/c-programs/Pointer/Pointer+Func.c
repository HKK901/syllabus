#include <stdio.h>
void square(int *n) {
    *n = (*n) * (*n);
}
int main() {
    int num = 5;
    printf("Original number: %d\n", num);
    square(&num); // pass address to function
    printf("Squared number: %d\n", num);
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}