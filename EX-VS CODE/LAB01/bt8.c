#include<stdio.h>
#include<conio.h>

void main()
{
	printf("-- Chuong trinh nhap canh a, tinh dien tich cua hinh vuong --\n");

	float a,s=0;
	printf("\nnhap canh a: ");
	scanf("%f",&a);
	
	s = a * a;
	printf("Dien tich hinh vuong co canh bang %.1f la: %.2f",a,s);
	getch();
}
