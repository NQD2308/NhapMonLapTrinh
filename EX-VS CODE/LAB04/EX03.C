#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh kien tra so chan hay le --\n");

    int n;
    printf("\nXin nhap so: ");
    scanf("%d",&n);

    if (n%2 == 0)   
        printf("%d la so chan",n);
    else
        printf("%d la so le",n);
    
    getch();   
}
