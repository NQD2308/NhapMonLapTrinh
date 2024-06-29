#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh xuat ra man hinh cac so nguyen le sao cho cu 5 so lai xuong dong --\n");

    int n,i,m=0;
    printf("\nEnter number: ");
    scanf("%d",&n);
	
	int count = 0;
	for (i = 0; i < n; i++)
    {
        if(i%2 != 0)
        {
        	count++;
            printf("%d\t",i);
        }
    	if(count == 5)
            printf("\n");
    }
    getch();
}
