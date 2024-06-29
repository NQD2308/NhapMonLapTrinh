#include<stdio.h>
#include<conio.h>

int bangcuuchuong(int n);

int main()
{
    printf("===== Bang cuu chuong =====\n");

    int n;
    do
    {
    printf("\nEnter number: ");
    scanf("%d",&n);

    bangcuuchuong(n);
	}while(1);
    getch();
}

int bangcuuchuong(int n)
{
    int i, s=0;
    if(n>0 && n<=10)
    {
    	for (i = 1; i <= 10; i++)
    	{
        	s = n * i;
        	printf("%d. %d * %d = %d\n",i,n,i,s);
    	}
	}
	else
		printf("Bang cuu chuong chi trong pham vi tu 1 den 10.\n");
}
