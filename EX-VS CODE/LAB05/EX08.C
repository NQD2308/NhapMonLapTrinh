#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh in ra cac ky tu A - Z xuoi va nguoc --\n");
    
    int n;
    printf("\n1. Nhap Ky tu xuoi.\t");
    printf("2. Nhap Ky tu xuoi.\t");
    do
    {
    printf("\nKy tu muon xuat: ");
    scanf("%d",&n);
	}while(n < 1 && printf("error, pls, enter again.\n") || n > 2 && printf("error, pls, enter again.\n"));
	
    if(n == 1)
    {
		for(char i = 65; i <= 90; i++)
			printf("%c\t",i);
	}
	else
	{
		for(char t= 90; t>=65; t--)
			printf("%c\t",t);
	}
    getch();
}
