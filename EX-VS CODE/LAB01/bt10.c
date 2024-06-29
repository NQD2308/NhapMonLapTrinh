#include<stdio.h>
#include<conio.h>

void main()
{
    printf("-- Chuong trinh nhap day nho, day lon va chieu cao cua hinh thang can, tinh chu vi --\n");

    float a,b,h,p=0;
    printf("\nNhap day nho: ");
    scanf("%f",&a);
    printf("Nhap day lon: ");
    scanf("%f",&b);
    printf("Nhap chieu cao: ");
    scanf("%f",&h);

    p = a + b + (2 * h);
    printf("Chu vi cua hinh than can la: %.2f",p);
    getch();
}
