#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int cong(int a, int b);
int tru(int a, int b);
int nhan(int a, int b);
int chia(int a, int b);
int chiadu(int a, int b);

int main()
{
    int a,b;
    char ch;
    printf("Enter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);

    printf("Choose number[+,-,*,/,%]: ");fflush(stdin);
    scanf("%c",&ch); 

    switch (ch)
    {
        case '+': printf("phep cong: %d",cong(a, b)); break;
    
        case '-': printf("phep cong: %d",tru(a, b)); break;

        case '*': printf("phep cong: %d",nhan(a, b)); break;
        
        case '/': printf("phep cong: %d",chia(a, b)); break;

        case '%': printf("phep cong: %d",chiadu(a, b)); break;

        default: printf("No known, pls! enter again: +-*/%"); break;
    }

    getch();
}

int cong(int a, int b)
{
    int s = 0;
    s = a + b;
        return s;
}

int tru(int a, int b)
{
    int s = 0;
    s = a - b;
        return s;
}

int chia(int a, int b)
{
    int s = 0;
    s = a / b;
        return s;
}

int nhan(int a, int b)
{
    int s = 0;
    s = a * b;
        return s;
}

int chiadu(int a, int b)
{
    int s = 0;
    s = a % b;
        return s;
}
