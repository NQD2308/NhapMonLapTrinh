#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,i,j;
    int arr[20][20];
    printf("Enter number of colums: ");
    scanf("%d",&m);
    printf("Enter number of rows: ");
    scanf("%d",&n);


    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
        	printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        	
        	if(arr[i][j] < 0 || arr[i][j] > 10)
        	{
        		printf("Pls! Enter array[0,10].\n");
        		do
            	{
                	printf("Arr[%d][%d] = ",i,j);
                	scanf("%d",&arr[i][j]);
            	}while(arr[i][j] < 0 || arr[i][j] > 10);	
			}
            
        }
    }

    int s = 0;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            s += arr[i][j];
        }
    }
    printf("Sum array: %d",s);
}
