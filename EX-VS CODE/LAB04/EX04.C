#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong tringh kiem tra so ban nhap co chia het cho 3 va 5 khong? --\n");

    int n;
    printf("\nXin nhap so: ");
    scanf("%d",&n);

    if (n%3 == 0 && n%5 == 0)
        printf("%d la so chia het cho 3 va 5.");
        
    else
    	printf("%d la so khong chia het cho 3 va 5.");
    getch();
}
