#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Tinh tong 2 chu so cua so vua nhap --\n");

    int n, a, tong=0;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);

    a = n;
    while (a != 0)
    {
        tong += a%10;
        a /=10;
    }
    printf("Tong gia tri %d la %d",n,tong);
    getch();
}
