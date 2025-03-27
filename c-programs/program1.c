#include<stdio.h>
int main()
{
    int a, i, t=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for ( i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            t=1;
        }
    }
    if (t=0)
    {
        printf("\n It is a prime number");
    }
    else{
        printf("\n It is a composite number");
    }
    printf("\n Program Executed by Harshit");
    return 0;
}