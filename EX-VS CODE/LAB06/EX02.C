#include<stdio.h>
#include<conio.h>

int main()

{
    printf("-- Chuong trinh xuat ra man hinh tong cac so nguyen le --\n");
	
    int n,s;
    do
    {
	do
	{
    printf("\nEnter number: ");
    scanf("%d",&n);
	}while(n<0 && printf("Error. Pls, enter the number >= 0.\n"));

    for (int i = 0; i <= n; i++)
    {
        if(i%2 != 0)
         s += i;
    }
    printf("The result: %d\n",s);
    }while(n>0);
    getch();
}
