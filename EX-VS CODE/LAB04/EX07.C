#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tinh trung binh xep loai hoc luc --\n");

    float toan,ly,hoa;
    printf("\nNhap diem toan: ");
    scanf("%f",&toan);
    printf("Nhap diem ly: ");
    scanf("%f",&ly);
    printf("Nhap diem hoa: ");
    scanf("%f",&hoa);

    float dtb = (toan+ly+hoa)/3;
    printf("Tong diem trung binh cua hoc ky la %.1f\n",dtb);

    if (dtb < 5)
        printf("Hoc sinh kem.");
    
    else if(dtb >=5 && dtb <7)
        printf("Hoc sinh trung binh.");

    else if(dtb >=7 && dtb < 8)
        printf("Hoc sinh kha.");
    
    else if(dtb >= 8 && dtb < 9)
        printf("Hoc sinh gioi.");
        
    else
        printf("Hoc sinh xuat sac.");
    getch();
}