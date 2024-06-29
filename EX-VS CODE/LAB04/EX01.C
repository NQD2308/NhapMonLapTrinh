#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tim so lon nhat cua 2 so nguyen --\n");

    int a,b,max=0;
    printf("\nNhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    
    max= (a>b)?a:b;
    printf("So lon nhat cua %d va %d la %d",a,b,max);
    getch();
}
