#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap vao so thuc X va so nguyen N. Tinh va xuat ra man hinh tong: S = X + 2X + 3X +...+ NX --\n");

    int n,x,s,i;
    printf("\nNhap gia tri N: ");
    scanf("%d",&n);
    printf("Nhap gia tri X: ");
    scanf("%d",&x);

    for (i = 0; i <= n; i++)
    {
        s = s + i * x;  
    }
    printf("Ket qua: %d",s);
    getch();
    
}
