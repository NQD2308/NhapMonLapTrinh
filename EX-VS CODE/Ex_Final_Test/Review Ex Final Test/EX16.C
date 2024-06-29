#include<stdio.h>
#include<conio.h>

int fibonaci(int n);

int main()
{
    int n;
    printf("Enter value: ");
    scanf("%d",&n);

    printf("Fibonanci of %d is %d",n, fibonaci(n));
}

int fibonaci(int n)
{
    if (n == 0 || n == 1)
        return 1;

    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}