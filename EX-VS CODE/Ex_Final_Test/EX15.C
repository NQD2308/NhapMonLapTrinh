#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter value: ");
    scanf("%d",&n);

    printf("The result: %d",factorial(n));
    getch();
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    
    else
        return n * factorial(n - 1);
}
