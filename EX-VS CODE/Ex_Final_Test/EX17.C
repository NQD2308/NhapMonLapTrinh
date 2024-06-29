#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int maxarr(int n, int arr[]);
int minarr(int arr[], int n);
float averagearr(int arr[], int n);

int main()
{
    int n,i;
    int arr[50];
    printf("Enter number of array: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Max array: %d\n", maxarr(n,arr));
    printf("Min array: %d\n", minarr(arr,n));
    printf("Avg array: %.1f\n", averagearr(arr,n));
    
}

int maxarr(int n, int arr[])
{
    int i;
    int max = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
	return max;
}

int minarr(int arr[], int n)
{
    int i;
    int min = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

float averagearr(int arr[], int n)
{
    int i;
    int s = 0;
    float avg = 0;
    for (i = 0; i < n; i++)
    {
        s += arr[i];
    }
    return (float)s/n;

}
