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
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);

        sum += arr[i];
    }
    printf("\nThe result is %d",sum);
    getch();
}
