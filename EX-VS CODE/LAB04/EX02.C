#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tim so be nhat cua 4 so nguyen --\n");

    int a,b,c,d,min=0;
    printf("\nNhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    printf("Nhap c: ");
    scanf("%d",&c);
    printf("Nhap d: ");
    scanf("%d",&d);
    
    if (a<b && a<c && a<d)
        min = a;
    
    else if (b<a && b<c && b<d)
        min = b;
    
    else if (c<a && c<b && c<d)
        min =  c;

    else
        min = d;
    
    printf("So be nhat cua %d, %d, %d, %d la %d",a,b,c,d,min);
    getch();
}
