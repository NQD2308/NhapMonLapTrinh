#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j;
    int arr[50][50];
    printf("Enter number of colums: ");
    scanf("%d",&m);
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            do
            {
                printf("arr[%d][%d] = ",i,j);
                scanf("%d",&arr[i][j]);
            } while (arr[i][j] < 0 || arr[i][j] > 10);
        }
    }

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }

    int s = 0;
    printf("Even array is: ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (arr[i][j]%2 == 1)
            {
                printf("%d\t",arr[i][j]);
                s += arr[i][j];
            }
        }
    }
    printf("\nThe even sum array: %d",s);
}
