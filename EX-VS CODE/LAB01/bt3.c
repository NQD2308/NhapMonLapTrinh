#include<stdio.h>
#include<conio.h>

void main()
{
    printf("-- Chuong trinh nhap vao hai so nguyen duong. Tinh tong, hieu, tich cua 2 so. Hien thi ket qua ra man hinh --\n");

    int a,b,tong=0,hieu=0,tich=0;
    printf("\nNhap so a: ");
    scanf("%d",&a);
    printf("Nhap so b: ");
    scanf("%d",&b);

    tong = a + b;
    hieu = a - b;
    tich = a * b;

    printf("Tong = %d\n Hieu = %d\n Tich = %d",tong,hieu,tich);
    getch();
}
