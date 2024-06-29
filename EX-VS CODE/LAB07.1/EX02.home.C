#include<stdio.h>
#include<conio.h>
#include<math.h>

int snt(int n);
int fabonaci(int n);
int chinhphuong(int n);
int sohoanhao(int n);

int main()
{
    int c,n;
    
    printf("\t\t\t========== MENU ==========\n\n");
    printf("1. In ra so nguyen to dau tien.\t");
    printf("\t2. In ra so Fibonaci dau tien.\n\n");
    printf("3. In ra so chinh phuong dau tien.\t");
    printf("4. In ra so hoan hao dau tien.\n\n");
    printf("\t\t\t ========= END =========\n");
    do
    {
    printf("\nEnter programming: ");
    scanf("%d",&c);
    }while(c < 1 || c >4);

    do
    {
    printf("\n\nEnter number: ");
    scanf("%d",&n);

    int dem=0,i=2;
	if(c == 1)
	{
    printf("\n%d so nguyen to dau tien:\t",n);
        while(dem < n)
        {
        	if(snt(i))
			{
				
        		printf("\t%d",i);
        		dem++;
			}
			i++;
		}
	}
	else if(c == 2)
	{
    printf("\n%d so Fibonaci dau tien:\t",n);
    fabonaci(n);
	}
	else if(c == 3)
	{
    printf("\n%d so chinh phuong dau tien:\t",n);
    chinhphuong(n);
	}
	else
        sohoanhao(n);

    c= getch();
    }while(c != 27);
    getch();
}

int snt(int n)
{
    int i;
    if (n < 2)
    	return 0;
       
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        } 
    }
    return 1;
}

int fabonaci(int n)
{
	int f0 = 0, f1 = 1, fn;
	for (int i = 0; i < n; i++)
    {
        if(i <= 1)
			fn = i;
	
		else
		{
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;	
		}
    printf("\t%d",fn);
    }
  return 0;  
}

int chinhphuong(int n)
{
    int i=1, count = 0;
    int chinhphuong = 0;
    
    while (count < n)
    {
        chinhphuong = 0;
        for(int j =1; j<=i; j++)
        {
            if (j*j == i)
            {
                chinhphuong = 1;
            }     
        }
        if (chinhphuong == 1)
        {
            printf("%d\t",i);
            count++;
        }
        i++;
    }
}

int sohoanhao(int n)
{
    int s=0,i=1;
    if (n < 2)
    {
        printf("%d khong phai la so hoan hao",n);
    }
    
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
            s += i;
    }      
    if(s == n)
        printf("%d la so hoan hao!",n);
        
    else
    	printf("%d khong phai la so hoan hao!",n);
}


