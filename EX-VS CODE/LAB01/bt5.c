#include<stdio.h>
#include<conio.h>

void main()
{
	printf("-- Chuong trinh nhap vao mot so duong co 2 chu so, in ra so dao nguoc cua so do --\n");
    int n;
    printf("\nNhap so can dao: ");
	scanf("%d",&n);
	printf("Nghich dao: %d",(n%10)*10+n/10);
	getch();
}
