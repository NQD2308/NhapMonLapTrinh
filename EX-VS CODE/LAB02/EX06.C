#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tinh va in ra tien do xe cho khach hang --\n");

    int gio, gia3h=2, gia24h=10;
    float gia=0;
    printf("\nNhap so gio khach hang do xe: ");
    scanf("%d",&gio);

    

    if (gio <= 3)
        printf("Gia: %d$", gia3h);

    else if (gio > 3 && gio <= 24)
    {
        for (int i = 0; i <= gio; i++)
        {
            gia= (i * 0.5) + 0.5;
        }
        printf("Gia: %.1f$", gia);
    }
    else
        printf("Gia: %d$", gia24h);

    getch();
}
