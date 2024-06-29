#include<stdio.h>
#include<conio.h>

int congnguyen(int a, int b);
float sothuc(float a, float b);

int main()
{
	int n;
	do
	{
	printf("=========== MENU ===========\n\n");
	printf("1. So nguyen.\t");
	printf("2. So thuc.\n\n");
	printf("  ========= END ==========\n\n");
	printf("\nChon kieu so: ");
	scanf("%d",&n);
	}while(n<0 && printf("Xin nhap 1 neu muon chon so nguyen va nhap 2 neu muoc chon so thuc.") || n>2 && printf("Xin nhap 1 neu muon chon so nguyen va nhap 2 neu muoc chon so thuc.\n\n"));
		
do
{	
	if(n == 1)
	{
		int a,b;
		printf("\nEnter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
		
 		congnguyen(a, b);
	}
	else
	{
		float a,b;
		printf("\nEnter a: ");
		scanf("%f",&a);
		printf("Enter b: ");
		scanf("%f",&b);
		
		sothuc(a, b);
	}
}while(1);
 getch();
}

int congnguyen(int a, int b)
{
    int c = 0, t=0, n=0, chia=0;
    int chiadu=0;

    c = a + b;
    t = a - b;
    n = a * b;
	chia = a/b;

    printf("\n%d + %d = %d",a,b,c);
	printf("\n%d - %d = %d",a,b,t);
	printf("\n%d * %d = %d",a,b,n);
	printf("\n%d / %d = %d",a,b,chia);
	printf("\n%d chia du cho %d = %d\n",a,b,a%b);
    return t;
}

float sothuc(float a, float b)
{
	float c = 0, t=0, n=0, chia=0;
    int chiadu=0;
    
    c = a + b;
    t = a - b;
    n = a * b;
	chia = a/b;
	
	printf("\n%.1f + %.1f = %.1f",a,b,c);
	printf("\n%.1f - %.1f = %.1f",a,b,t);
	printf("\n%.1f * %.1f = %.1f",a,b,n);
	printf("\n%.1f / %.1f = %.1f\n",a,b,chia);
	//printf("\n%.0f chia du cho %.0f = %d",a,b,a%b);
}
