#include <stdio.h>
int main()
{
    int matrix[3][3], i, j, sumodd = 0, sumeven = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element of matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (i == j || i + j == 2)
            {
                sumodd += matrix[i][j];
            }
            else
            {
                sumeven += matrix[i][j];
            }
        }
    }
    printf("\n Sum of odd indexed elements is: %d\n", sumodd);
    printf("\n Sum of even indexed elements is: %d\n", sumeven);
    printf("\n Program Executed by Harshit");
    return 0;
}