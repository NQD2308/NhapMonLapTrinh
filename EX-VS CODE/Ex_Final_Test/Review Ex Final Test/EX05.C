#include<stdio.h>
#include<conio.h>

int main()
{
    char s[20];
    printf("Enter any word: ");
    gets(s);

    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",s);
    }
    getch();
}
