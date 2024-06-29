#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    int arr[3][4];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }

    int s= 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            s += arr[i][j];
        }
    }
    printf("Sum array: %d", s);
}