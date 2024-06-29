#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap thang de biet thang do bao nhieu ngay --\n");

    int n;
    printf("Nhap thang: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1: printf("Thang %d co 31 ngay.",n); break;
    case 2: printf("Thang %d co 28 ngay va 29 ngay vao nam nhuan.",n); break;
    case 3: printf("Thang %d co 31 ngay.",n); break;
    case 4: printf("Thang %d co 30 ngay.",n); break;
    case 5: printf("Thang %d co 31 ngay.",n); break;
    case 6: printf("Thang %d co 30 ngay.",n); break;
    case 7: printf("Thang %d co 31 ngay.",n); break;
    case 8: printf("Thang %d co 31 ngay.",n); break;
    case 9: printf("Thang %d co 30 ngay.",n); break;
    case 10: printf("Thang %d co 31 ngay.",n); break;
    case 11: printf("Thang %d co 30 ngay.",n); break;
    case 12: printf("Thang %d co 31 ngay.",n); break;
	}
    getch();
}
