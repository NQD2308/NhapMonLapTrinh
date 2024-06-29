#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tinh P = n! --\n");

    int p, n,gt = 1;
    do
    {
    printf("Enter n: ");
    scanf("%d",n);
	}while(n<=0 && printf("Error. Pls, enter agian!"));

    for (int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    printf("P = %d! = %d",n,p);
    getch();
}
