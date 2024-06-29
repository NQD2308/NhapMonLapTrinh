#include <stdio.h>
#include<conio.h>

int main()
{
   char ten[50];
   int maso;

    printf("Nhap MSSV: ");
    scanf("%d",&maso);
    fflush(stdin);
    printf("Nhap ten: ");
    gets(ten);
    
   printf("%d %s", maso, ten);

   getch();
}