#include<stdio.h>
#include<conio.h>


int main()
{
	int n,count0 = 0, count1 = 0;
	int i = 0, s=0;
	do
	{
		printf("Enter number: ");
		scanf("%d",&n);
		
		for(i=0; i<n; i++)
		{
			if(n >= 0)
				count1++;
		}
		
		while(1)
		{
			if(n >= 0)
			{
				count0++;
				printf("dem: %d",count0);
				break;
			}
		}
		if(n<0)
			printf("%d",s+count1);		
	}while(n>=0);
	

	getch();
}
