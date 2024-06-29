#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float r, dien_tich=0, chu_vi=0 ;
    printf("-- Cho hang so PI=3.14. Nhap vao ban kinh r, tinh va xuat ra chu vi, dien tich hinh tron --\n");
    printf("\nNhap ban kinh r: ");
    scanf("%f",&r);

    dien_tich = pow(r,2) * 3.14;
    chu_vi = r * r * 3.14;
    printf("Dien tich hinh tron co ban kinh %.1f la %.2f\nChu vi hinh  tron co ban kinh %.1f la %.2f",r,dien_tich,r,chu_vi);
    getch();
}
