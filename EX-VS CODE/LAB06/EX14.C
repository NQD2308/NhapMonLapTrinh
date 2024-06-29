#include<stdio.h>
#include<conio.h>

int gcd(int x, int y)
{
    if (x == 0 || y == 0)
    {
		return x + y;
  	}
    
    while (x != y)
    {
        if(x > y)
        {
            x -= y;
        }
        else
        {
            y -=  x;
        }
    }
    return x;
}

int main()
{
    printf("-- Chuong trinh tim USCLN cua X va Y --\n");

    int x,y;
    int countx;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    printf("USCLN of %d and %d: %d",x,y,gcd(x,y));
    getch();
}
