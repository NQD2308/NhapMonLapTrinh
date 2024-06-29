#include<stdio.h>
#include<conio.h>

int max(int a, int b, int c);

int main()
{
    printf("== Tim max trong 3 so ==\n");
do
{
    int a,b,c;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);

    printf("Max = %d\n",max(a, b, c));
}while(1);
    getch();
}

int max(int a, int b, int c)
{
    int max1;
     if (a>b && a>c)
         max1 = a;
     
     else if(b>a && b>c)
         max1 = b;
     
     else
        max1 = c;
	
    return max1;
}
