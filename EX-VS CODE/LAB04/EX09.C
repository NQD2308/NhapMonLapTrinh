#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap nam de biet con giap cua nam do --\n");

    char can[10][5] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
    char chi[12][5] = {"Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};

    int n;
    printf("\nNhap nam: ");
    scanf("%d",&n);

    printf("%d - %s %s\n", n, can[n % 10], chi[n % 12]);
    getch();
}
