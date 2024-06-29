#include<stdio.h>
#include<conio.h>
#include<math.h>

const double PI = 3.14;

int main()
{
    printf("-- Chuong trinh nhap ban kinh r, tinh dien tich cua hinh tron --\n");

    double dientich,r;
    printf("\nnhap ban kinh r: ");
    scanf("%lf",&r);

    dientich = pow(r,2) * PI;
    printf("Dien tich hinh trong la: %.2lf",dientich);
    getch();
}
