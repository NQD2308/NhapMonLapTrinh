#include<stdio.h>
#include<conio.h>

double fact(int n)
{
    if(n == 0) return 1;
    return n * fact(n-1);
}

int main()
{
    printf("-- Chuong trinh tinh giai thua --\n");

    int n;
    printf("Nhap so gai thua: ");
    scanf("%d",&n);

    printf("%d! = %.0lf",n,fact(n));
    getch();
}
