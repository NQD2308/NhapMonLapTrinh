#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh xuat cac uoc so cua n hoac nho hon n --\n");

    int n,i;
    printf("\nEnter the number: ");
    scanf("%d",&n);

    for(i=1; i < n; i++ )
    {
        if (n % i == 0)
        {
            printf("%d\t",i);
        } 
    }
    getch();
}
