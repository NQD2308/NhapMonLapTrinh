#include<stdio.h>
#include<conio.h>

int tong(int n);
int tongchan(int n);
int tongle(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    printf("Tong: %d",tong(n));
    printf("\nTong chan: %d",tongchan(n));
    printf("\nTong le: %d",tongle(n));
    getch();
}

int tong(int n)
{
    int s=0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}

int tongchan(int n)
{
    int tc=0,count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            tc += i;
        }  
    }
    return tc;
}

int tongle(int n)
{
    int tl=0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            tl += i;
        }
    }
    return tl;
}
