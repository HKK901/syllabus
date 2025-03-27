#include<stdio.h>
int main()
{
    int a, i, ans=1;
    printf("Enter a number: ");
    scanf("%d", &a);
    for ( i = 1; i <= a; i++)
    {
        ans *= i;
    }
    printf("The factorial is %d", ans);
    printf("\n Program Executed by Harshit");
    return 0;
}