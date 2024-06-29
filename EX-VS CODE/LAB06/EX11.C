#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap so nguyen duong lien tiep sao cho nhap mot sao am tinh tong cac so duong vua nhap --\n\n");

    int n, s=0, count = 0;
    do
    {
    do
    {
        printf("Enter number: ");
        scanf("%d",&n);
		
		for(int i=0; i<n; i++)
		{
			if(n >= 0)
				count++;
		}
    } while (n >= 0);

    if(n<0)
    	s += count;
    	
    printf("The result: %d\n",s);
	}while(n<0);
    getch();
}
