// perfect number
#include<stdio.h>
int main()
{
    int a, i, t=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for ( i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            t+=i;
        }
    }
    if (t==a)
    {
        printf("\n It is a perfect number");
    }
    else{
        printf("\n It is not a perfect number");
    }
    printf("\n Program Executed by Harshit");
    return 0;
}