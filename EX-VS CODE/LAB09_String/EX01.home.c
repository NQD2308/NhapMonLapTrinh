#include<stdio.h>
#include<conio.h>

int main()
{
    char ten[50];
    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten),stdin);

    printf("Ten cua ban la %s",ten);
    getch();
}
