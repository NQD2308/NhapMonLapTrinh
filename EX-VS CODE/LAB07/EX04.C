#include<stdio.h>
#include<conio.h>

int uscln(int a, int b);

int main()
{
    printf("===== TIM USCLN =====\n");

    int a,b;
    do
    {
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("USCLN cua %d va %d la %d\n",a,b,uscln(a, b));
    }while(1);
    getch();
}

int uscln(int a, int b)
{
  if (a == 0 || b == 0)
  {
      return a + b;
  }
  while (a != b)
  {
    if(a > b)
        a -= b;

    else
        b -= a;
  }
  return b;
    
}