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
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    int s = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            s += arr[i];
        }
    }
    printf("Sum is %d",s);
    getch();
}
