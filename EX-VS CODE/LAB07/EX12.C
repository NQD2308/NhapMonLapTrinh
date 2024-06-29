#include<stdio.h>
#include<conio.h>

int tong(int a, int b);
int hieu(int a, int b);
int thuong(int a, int b);
int tich(int a, int b);
int max(int a, int b);
int uscln(int a, int b);
int bscnn(int a, int b);

int main()
{	
	int c;

    printf("\t========== MENU ==========\n\n");
    printf("1. Tong hai so.\n");
    printf("2. Hieu hai so.\n");
    printf("3. Thuong hai so.\n");
    printf("4. Tich hai so.\n");
	printf("5. Tim so lon nhat cua hai so.\n");
    printf("6. Tim uoc so chung lon nhat cua hai so.\n");
    printf("7. Tim uoc so chung nho nhat cua hai so.\n");
    printf("\n\t ========= END =========\n\n");
    do
    {
    printf("\nChon phep tinh ban muon: ");
	scanf("%d",&c);
	}
	while(c < 1 && printf("Chon cac chuong trinh tu 1 den 7.\n")|| c > 7 && printf("Chon cac chuong trinh tu 1 den 6.\n"));
	
	do
    {
    int a, b;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    	if (c == 1)
        	printf("Tong: %d + %d = %d\n",a,b,tong(a,b));
    
    	else if(c == 2)
        	printf("Hieu: %d - %d = %d\n",a,b,hieu(a,b));
    
    	else if(c == 3)
        	printf("Thuong: %d * %d = %d\n",a,b,thuong(a,b));
    
    	else if(c == 4)
        	printf("Tich: %d / %d = %d\n",a,b,tich(a,b));
    
    	else if(c == 5)
        	printf("Max of %d and %d is %d\n",a,b,max(a,b));

    	else if(c == 6)
        	printf("USCLN of %d and %d is %d\n",a,b,uscln(a,b));

    	else
        	printf("BSCNN of %d and %d is %d\n",a,b,bscnn(a,b));
	}while(1);
    getch();
}

int tong(int a, int b)
{
    return a + b;
}

int hieu(int a, int b)
{
    return a - b;
}

int thuong(int a, int b)
{
    return a * b;
}

int tich(int a, int b)
{
    return a / b;
}

int max(int a, int b)
{
    return (a>b)?a:b;
}

int uscln(int a, int b)
{
    if(a == 0 || b == 0)
        return a + b;
    
    while(a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
            b -= a;
    }
    return a;
}

int bscnn(int a, int b)
{
    return (a*b) / uscln(a, b);
}
