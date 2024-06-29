#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh nhap gio, phut, giay. In ra tong so giay --\n");
    int h,m,s,tong;
    printf("\nnhap gio: ");
    scanf("%d",&h);
    printf("nhap phut: ");
    scanf("%d",&m);
    printf("nhap giay: ");
    scanf("%d",&s);

    tong = h*3600 + m*60 + s;
    printf("tong so giay cua %d gio %d phut %d giay la %d giay", h,m,s,tong);
    getch();

}
