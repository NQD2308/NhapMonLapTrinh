#include<stdio.h>
#include<conio.h>

int max(int a, int b, int c, int d);

int main()
{
    printf("== Tim max trong 3 so ==\n");
do
{
    int a,b,c,d;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("Enter d: ");
    scanf("%d",&d);

    printf("* Max = %d\n",max(a, b, c, d));
}while(1);
    getch();
}

int max(int a, int b, int c, int d)
{
    int max1;
     if (a>b && a>c && a>d)
         max1 = a;
     
     else if(b>a && b>c && b>d)
         max1 = b;
     
     else if(c>a && c>b && c>d)
        max1 = c;
        
     else
        max1 = d;
	
    return max1;
}
