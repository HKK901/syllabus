#include<stdio.h>
void addarray(int[], int);
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    addarray(arr, n); 
    return 0;
}

void addarray(int arr[], int size) 
{
    int sum = 0;
    for(int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    printf("Sum of the array elements is: %d\n", sum);
}