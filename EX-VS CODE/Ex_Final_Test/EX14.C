#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arrsum(int n, int arr[]);

int main()
{
    int n;
    int arr[10];
    do
    {
        printf("Enter number of array[maximum 10]: ");
        scanf("%d",&n);
    } while (n <= 0);

    int i;
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("The array sum is %d", arrsum(n,arr));
}

int arrsum(int n, int arr[])
{
    if (n == 1)
        return arr[0];
    
    return arr[n-1] + arrsum(n-1,arr);
}

