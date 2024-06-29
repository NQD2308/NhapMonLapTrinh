#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fibonaci(int n);

int main()
{
    int n,i;
    printf("Enter vallue: ");
    scanf("%d",&n);
    
    printf("%d", fibonaci(n));
}

int fibonaci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    
    else
        return fibonaci(n - 1) + fibonaci(n - 2); 
}
