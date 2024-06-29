#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void import(int arr[][10]);
void export(int arr[][10]);
int sum(int arr[][10]);

int main()
{
    int arr[100][10];

    import(arr);
    printf("\n");
    export(arr);
    printf("\n");
    printf("Tong cac phan tu: %d",sum(arr));

    getch();
}

void import(int arr[][10])
{
    srand(time(NULL));
    int i,j;
    for ( i = 0; i < 100; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            arr[i][j]= rand()%1000;
            printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }
}

void export(int arr[][10])
{
    int i,j;
    for ( i = 0; i < 100; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}


int sum(int arr[][10])
{
    int sum = 0;
    int i,j;
    for ( i = 0; i < 100; i++)
    {
        sum += arr[i][0] + arr[i][10-1];
    }
    for ( j = 0; j < 10; j++)
    {
        sum += arr[0][j] + arr[100-1][j];
    }
    return sum;   
}
