#include<stdio.h>
#include<conio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter value: ");
    scanf("%d",&n);

    printf("Factorial of %d is %d",n, factorial(n));
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    else
        return n * factorial(n - 1);
}
