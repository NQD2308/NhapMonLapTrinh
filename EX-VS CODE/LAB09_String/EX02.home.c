#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i=0;
    char ten[50];
    printf("Nhap ten cua ban: ");
    gets(ten);

    while(ten[i] != NULL)
    printf("%c\t",ten[i++]);
    getch();
}
