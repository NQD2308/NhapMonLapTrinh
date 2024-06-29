#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap vao mot so nguyen X. Kiem tra xem X co chia het cho ca 2 va 3 hay khong --\n");

    int n;
    printf("\nNhap gia tri x: ");
    scanf("%d",&n);

    if (n%2 == 0 && n%3 == 0)
    {
        printf("Gia tri %d chia het cho 2 va 3.",n);
    } else {
        printf("Gia tri %d khong chia het cho 2 va 3.",n);
    }
    getch();
}
