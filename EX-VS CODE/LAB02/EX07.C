#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Nhap vao 2 so a, b. Tim uoc so chung lon nhat cua 2 so --\n");

    int a, b, min, ucln;
    printf("\nNhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);

    if (a == 0 && b == 0)
        printf("Khong co uoc chung lon nhat.");

    else if (a != 0 && b == 0)
        printf("Uoc chung lon nhat la %d",a);

    else if (a == 0 && b != 0)
        printf("Uoc chung lon nhat la %d",b);

    else{
        if (a < b)
        {
        min = a;
    } else {
        min = b;
    }

    for(int i=1; i<=min; i++)
    {
    if(a%i == 0 && b%i == 0)
         ucln = i;}
    }
    printf("Uoc so chung lon nhat cua %d va %d la %d",a,b,ucln);
    getch();
}
