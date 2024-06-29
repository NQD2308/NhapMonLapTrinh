#include<stdio.h>
#include<conio.h>

int hinhtamgiacgocduoitrai(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
		printf("\n"); 
    }
}

int hinhtamgiacgocduoiphai(int r)
{
	int i,j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
            printf("  ");
        
        for (j=i; j <= r; j++)
			printf(" *"); 
		
		printf("\n");
    }
}

int hinhvong(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            printf("* ");
        }
		printf("\n"); 
    }
}

int tamgiaccanrong(int r)
{
    int k;
    k = r-1;
    for (int i = 0; i < r-1; i++)
    {
        for (int j = 0; j < 2*r-1; j++)
        {
            if (j == k-i || j == k+i)
                printf(" * ");
            
            else
                printf("   "); 
        } printf("\n");
    }

    for (int i = 0; i < 2*r-1; i++)
    {
        printf(" * ");
    }
}

int hinhvuongrong(int r)
{
	for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == 1 || i == r || j == 1 || j == r)
                printf(" * ");
            else
                printf("   ");  
        }
        printf("\n");
    }
}

int main()
{
    printf("-- Chuong trinh in sao --\n");

    int i,j,r,c,t;
    printf("\n\t========== TYPE ==========\n");
    printf("\n1. Nomal triangle.\t");
    printf("2. Empty triangle.\n");
	printf("\n\t========== END ==========\n");
	do
	{
	printf("\nType of triangle: ");
    scanf("%d",&t);
	}while(t<1 || t>2);

	if(t == 1)
	{
	printf("\n  ========== MENU ==========\n");
    printf("\n1. Hinh tam giac goc duoi trai.\n");
    printf("2. Hinh tam giac goc tren phai.\n");
    printf("3. Hinh vuong.\n");
    printf("\n  ========== END ==========\n");
    printf("\nchoose the triangle you want: ");
    scanf("%d",&c);
    printf("\nEnter the rows: ");
    scanf("%d",&r);
	}
    else if(t == 2)
    {
    printf("\n  ========== MENU ==========\n");
    printf("\n1. Hinh tam giac can.\n");
    printf("\n2. Hinh vuong.\n");
    printf("\n  ========== END ==========\n");
	printf("\nchoose the triangle you want: ");
    scanf("%d",&c);	
    printf("\nEnter the rows: ");
    scanf("%d",&r);
	}
	
    if(t == 1 && c == 1)
    	hinhtamgiacgocduoitrai(r);
    
    else if(t == 1 && c == 2)
    	hinhtamgiacgocduoiphai(r);
    
    else if(t == 1 && c == 3)
    	hinhvong(r);

    else if(t == 2 && c == 1)
        tamgiaccanrong(r);

    else if(t == 2 && c == 2)
        hinhvuongrong(r);

    getch();
}
