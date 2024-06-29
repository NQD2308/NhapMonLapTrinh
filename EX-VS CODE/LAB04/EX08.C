#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh nhap mot so de xuat ra thang --\n");

    int n;
    printf("\nNhap so 1 -> 12: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1: printf("Thang %d la January",n); break;
    case 2: printf("Thang %d la February",n); break;
    case 3: printf("Thang %d la March",n); break;
    case 4: printf("Thang %d la April",n); break;
    case 5: printf("Thang %d la May",n); break;
    case 6: printf("Thang %d la June",n); break;
    case 7: printf("Thang %d la June",n); break;
    case 8: printf("Thang %d la August",n); break;
    case 9: printf("Thang %d la September",n); break;
    case 10: printf("Thang %d la October ",n); break;
    case 11: printf("Thang %d la November",n); break;
    case 12: printf("Thang %d la December",n); break;
    default:
        break;
    }
    getch();
}
