#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh in ra so nguyen to dau tien --\n");

    int n;
    do
    {
    	printf("\n");
    	do
    	{
    	printf("\nEnter number: ");
    	scanf("%d",&n);
		}while(n<2 && printf("Xin nhap so >= 2.\n"));
		
		int count =0;
		int m = 2;
		while(1)
		{
			int mark = 1;
			for(int i=2; i <= sqrt(m); i++)
			{
				if(m % i == 0)
				{
				 mark = 0;
				 	break;
				}
			}
			if(mark == 1)
			{
				count++;
				printf("%d\t",m);
			}
			
			if(count >= n)
			{
				break;
			}
			m++;
		}
	}while(n>2);
    getch();
}
