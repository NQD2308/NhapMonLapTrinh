#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh nhap so nguyen n va so thuc x tinh cac bieu thuc --\n");

    int n,x;
    float z=0,t=0,k=0; 

    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    printf("Nhap gia tri x: ");
    scanf("%d",&x);

    z = (2 * x + sqrt(n)) / 13;
    t = (1/2 * x *n) + (2.32 * pow(x,3));
    k = pow((pow(x,2) + x + 1),n) + pow((pow(x,2) - x + 1),n);

    printf("Ket qua cua Z = %.2f\nT = %.2f\nK = %.2f",z,t,k);
    getch();
}
