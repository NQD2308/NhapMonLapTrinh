#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Nhap vao so nguyen duong a, kiem tra xem a co phai la so nguyen to khong?  --\n");

    int a;
    printf("\nNhap gia tri a: ");
    scanf("%d",&a);

    if (a < 2)
    {
        printf("gia tri %d khong phai la so nguyen to",a);
    }
        int count = 0;
        for (int i = 2; i <= sqrt(a); i++)
        {
        if(a%i == 0){
            count++;
        }}

        if(count == 0)
        printf("gia tri %d la so nguyen to",a);
        
        else {
        printf("gia tri %d khong phai la so nguyen to",a);
        }
    getch();
}