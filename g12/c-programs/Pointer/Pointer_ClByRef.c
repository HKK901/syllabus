#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // pass addresses for call by reference
    printf("After swap: x = %d, y = %d\n", x, y);
    printf("\nProgram Executed by Harshit Karna");
    return 0;
}
