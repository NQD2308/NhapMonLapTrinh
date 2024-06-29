#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap vao mot so nguyen X. Kiem tra xem X co la chan hay le --\n");

    int x;
    printf("\nNhap gia tri x: ");
    scanf("%d",&x);

    if (x%2 == 0)
    {
        printf("Gia tri %d la so chan",x);
    }
    else{
        printf("Gia tri %d la so le",x);
    }
    getch();
}