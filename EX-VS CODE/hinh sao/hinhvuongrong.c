#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j;
    printf("Enter the rows: ");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
   {
       for(j=1;j<=i;j++)
      {
             printf(" * ");
      }
      printf("\n");
    }
    for(i=1;i<=n;i++)
    {
    	printf(" * ");
	}
    getch();
}
