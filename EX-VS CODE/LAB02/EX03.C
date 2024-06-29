#include<stdio.h>
#include<conio.h>

int main()
{
    float toan,ly,hoa,dtb=0;
    printf("-- Nhap vao diem so cua ba mon Toan, Ly, Hoa. Tinh va xuat diem trung binh, xep loai hoc luc --\n-- Phan loai: gioi neu TB>=8.0, kha neu TB>=6.5, Trung binh neu TB>=5.0 va Yeu neu <5.0 --\n");
    printf("\nNhap diem toan: ");
    scanf("%f",&toan);
    printf("Nhap diem ly: ");
    scanf("%f",&ly);
    printf("Nhap diem hoa: ");
    scanf("%f",&hoa);

    

    dtb = (toan + ly + hoa)/3;
    printf("Diem trung binh la: %.1f\n",dtb);

    if (dtb < 5.0)
        printf("Dat danh hieu hoc sinh yeu.");

       else if (dtb >= 5.0 && dtb < 6.5)
            printf("Dat danh hieu hoc sinh trung binh.");

       else if (dtb < 8.0)
            printf("Dat danh hieu hoc sinh kha.");
    
    else //dtb > 8.0
    {
        printf("Dat danh hieu hoc sinh gioi.\n");
        printf("cam on su co gang ban de dat duoc danh hieu hoc sinh gioi trong hoc ky vua qua.");
    }
    getch();
    
}
