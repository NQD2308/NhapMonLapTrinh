#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh can bac nhat --\n");

    int a,b,x;
    printf("\nNhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);

    if (b == 0)
        printf("Phuong trinh vo so nhiem.");
    
    else if(a == 0)
        printf("Phuong trinh vo nghiem.");

    else //a>0 && b>0
        printf("Phuong trinh co x=%d",-b/a);
    getch();
}
