#include<stdio.h>
#include<conio.h>

int tong(int *pa,int *pb);
int hieu(int *pa, int *pb);
int tich(int *pa, int *pb);
int Thuong(int *pa, int *pb);

int Thuongdu(int *pa, int *pb)
{
    int t = 0;
    int *pt;
    pt = (int *)malloc(sizeof(int));

    t = *pa % *pb;
    pt = &t;

    printf("\ndu: %d",*pt);
}

int main()
{
	int *pa;
	int *pb;
	
	pa = (int *)malloc(sizeof(int));
    pb = (int *)malloc(sizeof(int));
    printf("Enter number a: ");
    scanf("%d", pa);
    printf("Enter number b: ");
    scanf("%d", pb);

    tong(pa, pb);
    hieu(pa, pb);
    tich(pa, pb);
    Thuong(pa, pb);
    Thuongdu(pa, pb);

    getch();
}

int tong(int *pa,int *pb)
{
	int t = 0;

    t = *pa + *pb; 

   printf("\nTong: %d + %d = %d",*pa,*pb,t);
}

int hieu(int *pa, int *pb)
{
    int h=0;
    int *ph;
    ph = (int *)malloc(sizeof(int));

    h = *pa - *pb;
	ph = &h;
	
    printf("\nHieu: %d - %d = %d",*pa,*pb,*ph);
}

int tich(int *pa, int *pb)
{
    int t = 0;
    int *pt;
    pt = (int *)malloc(sizeof(int));

    t = *pa * *pb;
    pt = &t;

    printf("\nTich: %d * %d = %d",*pa,*pb,*pt);
}

int Thuong(int *pa, int *pb)
{
    int t = 0;
    int *pt;
    pt = (int *)malloc(sizeof(int));

    t = *pa / *pb;
    pt = &t;

    printf("\nThuong: %d / %d = %d",*pa,*pb,*pt);
}

