#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh nhap so luong, don gia cua mot mat hang. Tinh va in ra ket quq ra man hinh ca 2 so le --\n");

    int sl,dg;
    float gg=0,cvc=0,stpt=0;

    printf("\nNhap so luong: ");
    scanf("%d",&sl);
    printf("Nhap don gia: ");
    scanf("%d",&dg);

    gg = sl * dg * 0.12;
    cvc = sl * dg * 0.05;
    stpt = sl * dg - gg + cvc;

    printf("So tien phai tra cho don hang la: %.2f VND",stpt);
    getch();
}
