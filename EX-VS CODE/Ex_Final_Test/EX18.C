#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j;
    int arr[3][4];

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            do
            {
                printf("arr[%d][%d] = ",i,j);
                scanf("%d",&arr[i][j]);
            } while (arr[i][j] < 0 || arr[i][j] > 10);
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

    int s = 0;
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            s += arr[i][j];
        }
    }
    printf("Sum array is %d",s);
}
