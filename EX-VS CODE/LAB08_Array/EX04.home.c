#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void arrngaunhien(int arr[]);
int maxx(int arr[]);
int minn(int arr[]);
int tongchan(int arr[]);
int tongle(int arr[]);
int giamdan(int arr[]);

int main()
{
    int arr[200];

    arrngaunhien(arr);
    printf("\n--------------------\n\n");
    maxx(arr);
    minn(arr);
    printf("\n--------------------\n\n");
    tongchan(arr);
    tongle(arr);
    printf("\n--------------------\n\n");
    giamdan(arr);
    
    getch();
}

void arrngaunhien(int arr[])
{
    int i;
    srand(time(NULL));

    for ( i = 1; i <= 200; i++)
    {
        arr[i] = rand()%1000;
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

int maxx(int arr[])
{
    int i;
    int max = arr[1];
    for ( i = 1; i <= 200; i++)
    {
        if( max < arr[i]);
        {
            max = arr[i];
        }
    }
    printf("Max: %d",max);
}

int minn(int arr[])
{
    int i;
    int min = arr[1];

    for ( i = 1; i <= 200; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    printf("\nMin: %d\n",min);
}

int tongchan( int arr[])
{
    int i;
    int s = 0;
    for (i = 1; i <= 200; i++)
    {
        if (arr[i] % 2 == 0)
        {
            s += arr[i];
        }
    }
    printf("Tong chan cac so chan trong mang: %d\n",s);
}

int tongle(int arr[])
{
    int i;
    int s=0;

    for ( i = 1; i <= 200; i++)
    {
        if (arr[i] %2 != 0)
        {
            s += arr[i];
        } 
    }
    printf("Tong chan cac so le trong mang: %d\n",s);
}

int giamdan(int arr[])
{
    int i,j;

    for ( i = 1; i <= 200; i++)
    {
        for ( j = 200; j > i; j--)
        {
            if (arr[j - 1] < arr[j])
            {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("Mang giam dan.\n\n");
    for ( i = 1; i <= 200; i++)
    {
        printf("%d\n",arr[i]);
    }
}
