#include<stdio.h>
#include<conio.h>

void import(int a[][100], int m, int n);
void export(int a[][100], int m, int n);
int tongrowk(int a[][100], int m, int n);
int tongcolumk(int a[][100], int m, int n);
int tongcheo(int a[][100], int m, int n);
int maxrow(int a[][100], int m, int n);
int rowup(int a[][100], int m, int n);

int s = 0;
int main()
{
    int m,n;
    int a[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    import(a, m, n);
    printf("\n");
    export(a, m, n);
    tongrowk(a, m, n);
    tongcolumk(a, m, n);
    printf("\n\nTong duong cheo: %d",tongcheo(a, m, n));
    maxrow(a, m, n);
    printf("\n");
    rowup(a, m, n);
    export(a, m, n);
    

    getch();
}

void import(int a[][100], int m, int n)
{
    int i,j;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void export(int a[][100], int m, int n)
{
    int i,j;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}

int tongrowk(int a[][100], int m, int n)
{
    int i,j,k;
    printf("\nThe row you want to sum: ");
    scanf("%d",&k);

        s = 0;
        for ( j = 0; j < n; j++)
        {
            s += a[k][j];
        }
    printf("The sum of row %d is %d",k,s);
}

int tongcolumk(int a[][100], int m, int n)
{
    int i,j,k;
    printf("\n\nThe colum you want to sum: ");
    scanf("%d",&k);

    s = 0;
    for ( i = 0; i < n; i++)
    {
        s += a[i][k];
    }
    printf("The sum of colum %d is %d",k,s);
}

int tongcheo(int a[][100], int m, int n)
{
    int i,j;
    s = 0;
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                if (i == j)
                    s += a[i][j];
            }   
        }
    return s;
}

int maxrow(int a[][100], int m, int n)
{
    int i,j;
    int max;
    int row = 0;
    
    for ( i = 0; i < m; i++)
        {
            s = 0;
            for ( j = 0; j < n; j++)
            {
                s += a[i][j];
                if (max < s)
                {
                    max = s;
                    row = i;
                }
            }
        }
    printf("\n\nmax row is [%d] = %d",row,max);
}


int rowup(int a[][100], int m, int n)
{
    int i,j;
    int tmp = 0;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i][n] > a[j][n])
            {
               tmp = a[j][n];
               a[j][n] = a[i][n];
               a[i][n] = tmp;
            }  
        }
    }
}