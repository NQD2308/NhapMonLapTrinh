#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    int n,arr[10];
    do
    {
        printf("Enter number of array[maximun 10]: ");
        scanf("%d",&n);
    }while(n <= 0 || n > 10);

    int i;
    int sum = 0;
    for ( i = 0; i < n; i++)
    {
        do
        {
          printf("arr[%d] = ",i);
          scanf("%d",&arr[i]);  
        } while (arr[i] < -10 || arr[i] > 10);
        
        if (arr[i]%2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("The result is %d",sum);
}