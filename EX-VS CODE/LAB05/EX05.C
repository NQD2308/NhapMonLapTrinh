#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tinh giai thua n! --\n");

    int n,s = 1;
    do{
    printf("\nNhap so giai thua:");
    scanf("%d",&n);
    }while(n<0);

    for (int i = 1; i <= n; i++)
    {
        s *= i;
        //printf("%d",s);
    }
    printf("Ket qua %d! = %d",n,s);
    getch();
}
