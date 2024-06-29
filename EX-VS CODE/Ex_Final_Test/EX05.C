#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    char c[50];
    printf("Enter word: ");
    gets(c);

    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",c);
    }
    getch();
}
