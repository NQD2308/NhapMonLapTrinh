#include<stdio.h>
#include<conio.h>

int saogoctrai(int n);
int saogoctrairong(int n);
int saogocphairong(int n);
int saogocphai(int n);

int main()
{
    printf("===== In tam giac bang sao =====\n\n");
    
    int n;
    printf("Enter lenth: ");
    scanf("%d",&n);
	
	printf("H1\n");
    saogoctrai(n);  
    printf("\nH2\n");
    saogoctrairong(n);
    printf("\nH3\n");
    saogocphairong(n);
    printf("\nH4\n");
    saogocphai(n);
        
    getch();
}

int saogoctrai(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

int saogoctrairong(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                printf(" * ");
            }
            else
                printf("   ");
		}
            printf("\n");
    }
}

int saogocphairong(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j == n || i == n || j == n-i+1)
                printf(" * ");

            else
                printf("   ");
        }
        printf("\n");
    }	
}

int saogocphai(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j <= n-i)
                printf("   ");

            else
                printf(" * ");
        }
        printf("\n");
    }
}
