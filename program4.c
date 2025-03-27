#include <stdio.h>
int main() 
{
  int i, n;
  int a = 0, b = 1;
  int c = a + b;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("%d\t %d\t ", a, b);
  for (i = 3; i <= n; ++i) {
    printf("%d\t ", c);
    a = b;
    b = c;
    c = a + b;
  }
  printf("\n Program Executed by Harshit");
  return 0;
}
