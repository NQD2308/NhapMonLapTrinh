#include<stdio.h>
#include<conio.h>

int tong(int a);
int tongle(int a);
int tongchan(int a);

int main()
{
    printf("===== Chuong trinh tinh tong =====\n");

    int a;
    do
    {
    printf("\nEnter a: ");
    scanf("%d",&a);

    printf("\nTong: %d",tong(a));
    printf("\nTong le: %d",tongle(a));
    printf("\nTong chan: %d\n",tongchan(a));
	}while(1);
    getch();
}

int tong(int a)
{
	int t = 0;
	if(a == 1)	
		return 1;
	else
	t = a + tong(a - 1);
	
    return t;
}

int tongle(int a)
{
    int t = 0;
    if (a == 0)
        return 0;
    
    if (a%2 == 0)
    {
        t =tongle(a - 1);
        return t;
    }
    else
    {
        t = a + tongle(a - 1);
        return t;
    }
}

int tongchan(int a)
{
    int t=0;
    if (a == 0)
        return 0;

    if (a%2 == 0)
    {
        t = a + tongchan(a - 1);
        return t;
    }
    else
    {
        t = tongchan(a - 1);
        return t;
    }
}
