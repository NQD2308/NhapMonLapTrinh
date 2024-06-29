#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10];
    int n;
    do
    {
        printf("Enter number of array[0-10]: ");
        scanf("%d",&n);
    } while (n < 0 || n > 10);

    int i;
    printf("\nEnter array[-10,10].\n");
    for ( i = 0; i < n; i++)
    {
        do
        {
            printf("arr[%d] = ",i);
            scanf("%d",&arr[i]);   
        } while (arr[i] < -10 || arr[i] > 10);    
    }
    
    int s = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i]%2 == 0)
        {
            s += arr[i];
        }
    }
    printf("Sum is %d",s);
    getch();
}
