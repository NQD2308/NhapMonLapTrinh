#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Nhap vao 3 so thuc a,b,c. Kiem tra va cho biet chung co ton tai mot tam giac co chieu dai 3 canh lan luot la a,b,c khong? --\n-- Neu co thi in ra dien tich va chu vi tam giac do. Trong do S = sqrt(p(p-a)(p-b)(p-c)) voi p la 1/2 chu vi --\n");

    float a, b, c, p, s;

    printf("\nNhap gia tri a: ");
    scanf("%f",&a);
    printf("Nhap gia tri b: ");
    scanf("%f",&b);
    printf("Nhap gia tri c: ");
    scanf("%f",&c);

    if ((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<a*a+b*b))
    {
        printf("Day la ba canh cua tam giac.\n");
    
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p*b)*(p-c));
    printf("Chu vi cua tam giac la: %.2f\nDien tich cua tam giac la: %.2f",p,s);
    }
    else
        printf("Day khong phai la 3 canh cua tam giac.");

    getch();
}
