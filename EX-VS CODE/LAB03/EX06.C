#include<stdio.h>
#include<conio.h>
#include<math.h>

float Can_Bac_(int x, int n)
{
    return pow(x,1.*1/n);
}

int main()
{
    printf("-- Chuong trinh nhap so nguyen n, so thuc x. Hay tinh can bac n cua x --\n");

    int n;
    float x;

    printf("\nNhap so nguyen n: ");
    scanf("%d",&n);
    printf("Nhap so thuc x: ");
    scanf("%f",&x);;

    printf("Ket qua la: %.2f",Can_Bac_(x,n));
    getch();
}
