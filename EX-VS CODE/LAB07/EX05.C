#include<stdio.h>
#include<conio.h>

int giaithua(int a);

int main()
{
    printf("===== Chuong trinh tinh giai thua =====\n");

    int n;
    do
    {
    printf("\nEnter number: ");
    scanf("%d",&n);

    printf("%d! = %d\n",n,giaithua(n));
    }while(1);
}

int giaithua(int a)
{
    if(a == 1)
        return 1;
            return a * giaithua(a - 1);

    /*int n=1;
    for (int i = 1; i <= a; i++)
    {
        n *= i;
    }
    return n;*/
}