#include<stdio.h>
#include<conio.h>

void main()
{
    printf("-- Chuong trinh nhap ban kinh r, tinh chu vi cua hinh tron --\n");

    float r,c=0;
    printf("\nNhap ban kinh r: ");
    scanf("%f",&r);

    c = r * r * 3.14;
    printf("Chu vi hinh tron co ban kinh r = %.1f la %.2f",r,c);
    getch();
}
