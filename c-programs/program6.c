#include <stdio.h>
int main()
{
    int matrix[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element of matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (i == j || i + j == 2)
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("\n Sum of diagonal elements is: %d\n", sum);
    printf("\n Program Executed by Harshit");
    return 0;
}