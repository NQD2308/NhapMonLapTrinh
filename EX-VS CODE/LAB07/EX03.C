#include<stdio.h>
#include<conio.h>
#include<math.h>

int songuyento(int n);

int main()
{
    printf("===== Chuong trinh kiem tra so nguyen to =====\n");

    int n;
    do
    {
    printf("\nEnter number: ");
    scanf("%d",&n);

    songuyento(n);
    }while(1);
    getch();
}

int songuyento(int n)
{
    int i,count = 0;
    if (n < 2)
    {
        printf("%d khong phai la so nguyen to.\n",n);
    }
    else
    {
    	for (i = 2; i < sqrt(n); i++)
    	{
        if(n%i == 0)
        count++;
    	}
    	if (count == 0)
        	printf("%d la so nguyen to.\n",n);
        	
    	else
        	printf("%d khong phai la so nguyen to.\n",n);
    }
    

    return 0;
}
