#include<stdio.h>
#include<conio.h>

int max(int arr[], int n)
{
    int i;
    int maxx = arr[0];
    for ( i = 0; i < n; i++)
        if (maxx < arr[i])
            maxx = arr[i];
    
    return maxx;
}

int min(int arr[], int n)
{
    int i;
    int minn = arr[0];
    for ( i = 0; i < n; i++)
        if (minn > arr[i])
            minn = arr[i];
    
    return minn;
}

float average(int arr[], int n)
{
    int i;
    int s = 0;

    for ( i = 0; i < n; i++)
        s += arr[i];
    
    return (float)s/n; 
}

int main()
{
    int arr[20];
    int n,i;
    do
    {
        printf("Enter number of array[0,20]: ");
        scanf("%d",&n);
    } while (n < 0 || n > 20);
    
    for ( i = 0; i < n; i++)
    {
        printf("Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Max array: %d\n", max(arr, n));
    printf("Min array: %d\n", min(arr, n));
    printf("Avg array: %.1f\n", average(arr, n));
}