#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh xac nhan so chinh phuong --\n");

    int n;
    printf("\nnhap gia tri a: ");
    scanf("%d",&n);

    if (n <= 0)
        printf("%d khong phai la so chinh phuong.",n);
    else
    {
    	int a = sqrt(n);
        if ((a*a) == n)
        {
            printf("%d la so chinh phuong.",n);
        }
        else
            printf("%d khong phai la so chinh phuong.",n);
    }
    getch();
}
