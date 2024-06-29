#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tinh tong cac so trong n --\n");

    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);

    int sum = 0;
    do
    {
        sum += n%10;
        n /= 10;
    } while (n > 0);
    printf("The result is %d",sum);
    getch();
}
