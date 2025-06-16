#include <stdio.h>
int main() {
  int i, b = 0, r, a;
    printf("Enter an integer: ");
    scanf("%d", &i);
    a = i;
    while (i != 0) {
        r = i % 10;
        b = b * 10 + r;
        i /= 10;
    }
    if (a == b)
    {
        printf("%d is a palindrome.", a);}
    else
        {printf("%d is not a palindrome.", a);}
    printf("\n Program Executed by Harshit");
    return 0;
}