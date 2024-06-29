#include<stdio.h>
#include<conio.h>

void songuyenduong(int n);
int tong(int n);
int chinhphuong(int n);
int sohoanhao(int n);
void thoat(int n);

int main()
{
    int n,c,t;
    printf("\t\t\t\t========== MENU ==========\n\n");
    printf("1. Nhap mot so nguyen N.\t\t\t");
    printf("4. Tim cac so hoan hao nho hon hoac bang N.\n\n");
    printf("2. Tong cac so nguyen duong nho hon N.\t\t");
    printf("Esc - Thoat\n\n");
    printf("3. Xac nhan N la so chinh phuong\n\n");
    printf("\t\t\t\t ========= END =========\n\n");
    do
    {
    printf("Choose programming: ");
    scanf("%d",&t);
	}while(t< 1 && printf("Choose the programs from 1 to 4")|| t >4);
	
    do
    {
    	printf("\n\nEnter number: ");
		scanf("%d",&n);
		
        if(t == 1)
            songuyenduong(n);

        else if(t == 2)
            printf("Tong cac so tu 1 -> %d = %d\n",n-1,tong(n));

        else if(t == 3)   
            chinhphuong(n);

        else if(t == 4)
        	printf("Cac so hoan chinh <= %d la: ",n);
            sohoanhao(n);

        c = getch();
    }while(c != 27);
}


void songuyenduong(int n)
{
	
	
	if(n > 0)
	{
		do
		{
		printf("Enter number: ");
		scanf("%d",&n);		
		}while(n >= 0 || n < 0 && printf("Error. Pls, enter the number >= 0.\n"));
	}
}

int tong(int n)
{
    int s=0;
    for (int i = 1; i < n; i++)
    {
        s += i;
    }   
    return s;
}

int chinhphuong(int n)
{
    int i=0;
    while (i*i <= n)
    {
        if(i*i == n)
        {
            printf("%d la so chinh phuong.\n",n);
            return 0;
        } 
        i++;
    }
    printf("%d khong phai la so chinh phuong.\n",n);
}

int sohoanhao(int n)
{
    int s;
        for (int i = 1; i <= n; i++)
        {
        	s=0;
            for (int j = 1; j < i; j++)
                if (i % j == 0)
                    s += j;
            if(s == i)
            printf("\t%d",i);
        }
}

