#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    printf("-- Chuong trinh tinh tong binh phuong cua hai so duoc nhap vao tu ban phim --\n");
    int a,b,s=0;
    printf("\nNhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);

    s = pow(a,2) + 2*a*b + pow(b,2);
    printf("ket qua tong binh phuong cua (%d + %d)^2 = %d",a,b,s);
    getch();
}
