#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh dem so nguyen n co bao nhieu so --\n");

    int n,sochua = 0;
    printf("\nEnter n: ");
    scanf("%d",&n);

    if (n == 0)
        sochua = 1;
    
    while (n != 0)
    {
        sochua = sochua + 1;
        n = n / 10;
    }
    printf("total of number in value of n is %d",sochua);
    getch();
}
