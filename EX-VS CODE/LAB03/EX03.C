#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh dao nguoc so da nhap --\n");

    int n;
    printf("\nNhap gia tri can dao: ");
    scanf("%d",&n);
    printf("Gia tri dao nguoc cua %d la %d",n,(n%10)*10+n/10);
    getch();
}
