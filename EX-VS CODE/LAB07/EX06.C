#include<stdio.h>
#include<conio.h>

int fabonaci(int n);

int main()
{
    int n;
    do
    {
    printf("\nEnter number: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",fabonaci(i));
    }
    }while(1);
    
    getch();
}

int fabonaci(int n)
{
    int f0 = 0, f1 = 1, fn = 1;

    if (n < 0)
        return -1;
    
    else if(n == 0 || n == 1)
        return n;

    else
    {
        for (int i = 2; i < n; i++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
    
}