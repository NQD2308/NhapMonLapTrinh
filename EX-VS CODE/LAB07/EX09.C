#include<stdio.h>
#include<conio.h>
#include<math.h>

int songuyento(int n);

int main()
{
    printf("===== Chuong trinh in ra cac so nguyen to nho hon n =====");

    int n;
    do
    {
    printf("\n\nEnter number: ");
    scanf("%d",&n);
	
	for(int i=2; i<=n; i++)
	{
		if(songuyento(i) != 1)
    		printf("%d\t",i);
	}
	}while(1);
    getch();
}

int songuyento(int n)
{
	if(n < 2)
		return 0;

    int i;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
        	return 1;
        }
    }
}
