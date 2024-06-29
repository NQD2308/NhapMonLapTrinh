#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap so nguyen duong lien tiep sao cho nhap mot sao am tinh tong cac so duong vua nhap --\n\n");

    int n,count=0, sum=0;
    int s=0;
    float avg;
    do
    {
        printf("Enter number: ");
        scanf("%d",&n);
        
		for(int i=0; i<n; i++)
		{
			if(n >= 0)
				sum++;
		}
		
		while(1)
		{
			if(n >= 0)
				count++;
				break;
		}
		
		if (n < 0)
		{
			s += sum;
		printf("Sum: %d",s);
		printf("\nCount: %d",count);
		avg = sum/count;
		printf("\navg: %.1f",avg);
		}
	}while(n >= 0);
    getch();
}
