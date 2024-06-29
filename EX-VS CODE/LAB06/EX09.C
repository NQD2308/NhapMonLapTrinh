#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh xac nhan so nguyen to --\n");
    
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);

    if(n < 2)
        printf("%d khong phai la so nguyen to.",n);
    
    int count = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i == 0)
            count++;
    }
    if (count == 0)
    {
        printf("%d la so nguyen to.",n);
    }
    else
        printf("%d khong phai la so nguyen to.",n);
    getch();
}
