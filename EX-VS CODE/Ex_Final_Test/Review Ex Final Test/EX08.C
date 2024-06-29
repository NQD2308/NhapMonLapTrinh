#include<stdio.h>
#include<conio.h>

int cong(int a, int b)
{
    return a + b;
}

int tru(int a, int b)
{
    return a - b;
}

int nhan(int a, int b)
{
    return a * b;
}

int chia(int a, int b)
{
    return a / b;
}

int chiadu(int a, int b)
{
    return a % b;
}

int main()
{
    int a,b;
    char n;
    printf("Enter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);

    
    printf("Choose caculation[+,-,*,/,%]: ");fflush(stdin);
    scanf("%c",&n);
    switch (n)
    {
    case '+': printf("Tong s = %d", cong(a,b)); break;
        
    case '-': printf("Hieu s = %d", tru(a,b)); break;

    case '*': printf("Tich s = %d", nhan(a,b)); break;

    case '/': printf("Thuong s = %d", chia(a,b)); break;

    case '%': printf("du %d", chiadu(a,b)); break;
    
    default: printf("Enter again, pls!"); break;  
    }
}
