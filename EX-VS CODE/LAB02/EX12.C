#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("Nhap vao so nguyen duong X va kiem tra xem X co phai la so chinh phuong hay khong.\n");

    int x,a;
    printf("\nNhap so nguyen x: ");
    scanf("%d",&x);

    if (x > 0)
    {
        a = sqrt(x);
        if (a * a == x)
            printf("%d la so chinh phuong",x);
       
        else 
            printf("%d khong phai la so chinh phuong",x);
    }
    getch();
}