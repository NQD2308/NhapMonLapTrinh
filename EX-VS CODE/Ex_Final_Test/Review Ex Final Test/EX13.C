#include<stdio.h>
#include<conio.h>

float tong(float arr[], int n)
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
    	if(arr[i] > 0)
        	sum += arr[i];
    }
    return sum;
}

float tongchan(float arr[], int n)
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
    	if(arr[i] >= 0 && arr[i] - (int)arr[i] == 0)
            if((int)arr[i]%2 == 0)
        	    sum += arr[i];
    }
    return sum;
}

float tongle(float arr[], int n)
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
    	if(arr[i] > 0 && arr[i] - (int)arr[i] == 0)
            if ((int)arr[i]%2 == 1)
                sum += arr[i];	
    }
    return sum;
}

int main()
{
    float arr[10];
    int n,i;
    int s= 0;
    do
    {
        printf("Enter number of array[0,10]: ");
        scanf("%d",&n);
    } while (n < 0 || n > 10);
    
    printf("Enter array[-10,10].\n");
    for ( i = 0; i < n; i++)
    {
        do
        {
            printf("Arr[%d] = ",i);
            scanf("%f",&arr[i]);
        } while (arr[i] < -10 || arr[i] > 10);
    }
    
    printf("Sum array: %.1f\n", tong(arr, n));
    printf("Sum even array: %.1f\n", tongchan(arr, n));
    printf("Sum odd array: %.1f\n", tongle(arr, n));
}
