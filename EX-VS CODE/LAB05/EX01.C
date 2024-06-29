#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh cong don so da nhap --\n");
    
    int n,s=0;
    printf("\nnhap gia tri a: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        s += i;
    }
    printf("Ket qua bang: %d",s);
    getch();
}
