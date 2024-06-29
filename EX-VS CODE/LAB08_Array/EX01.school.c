#include<stdio.h>
#include<conio.h>
#include<math.h>

int inchan(int a[5]);
int inle(int a[5]);
int tongchan(int a[5]);
int tongle(int a[5]);
int perfectnumber();
int chia(int a[]);

int main()
{
    int a[5] = {4,6,3,8,28};
    int i;
    printf("a[5] = {4, 6, 3, 8, 9}");
    
    printf("\n\n1. Cac phan tu chan\n");
    inchan(a);
	printf("\n\n2. Cac phan tu le\n");
    inle(a);
    tongchan(a);
    tongle(a);
    printf("\n\n5. Tim so hoan hao trong phan tu array\n\n");
    perfectnumber();
    
    getch();
}

int inchan(int a[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("\na[%d] = %d",i,a[i]);
        }   
    }
}

int inle(int a[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("\na[%d] = %d",i,a[i]);
        }   
    }
}

int tongchan(int a[5])
{
    int i;
    int s = 0;
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            s += a[i];
        }
    }
    printf("\n\n3. Tong chan chu mang la: %d",s);
}

int tongle(int a[5])
{
    int i;
    int s = 0;
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            s += a[i];
        }
    }
    printf("\n\n4. Tong le chu mang la: %d",s);
}

int perfectnumber()
{
	int a[5] = {4,6,3,8,28};
    int i,n,j;
    int s;

	for(i = 0; i < 5; i++)
	{
		s=0;
    	for (j = 1; j <= a[i]/2; j++)
    	{
        	if (a[i] % j == 0)
        	{
            	s+= j;
        	}
    	} 
		if( s == a[i])
		{
			printf("a[%d] = %d\n",i,a[i]);   
		}
	}
}



