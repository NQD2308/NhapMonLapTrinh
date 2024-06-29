#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh tim so nho nhat trong 4 gia tri --\n");

    int a,b,c,d,min;
    printf("\nNhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);
    printf("Nhap gia tri c: ");
    scanf("%d",&c);
    printf("Nhap gia tri d: ");
    scanf("%d",&d);


    if (a<b && a<c && a<d)
    	{
        min = a;
    	}
    else if (b<a && b<c && b<d)
    	{
		min = b;
    	}
    else if (c<a && c<b && c<d )
    	{
        min = c;
	  	}
    else // c > d
        min = d;
    
    printf("So nho nhat trong cac gia tri la: %d", min);
    getch();
}
