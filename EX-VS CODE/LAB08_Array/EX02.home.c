#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void import(int arr[]);
int tangdan (int arr[]);

int main()
{
    int n;
    int arr[20];
    
    import(arr);
    printf("\n--------------------\n\n");
    tangdan (arr);

    getch();
}

void import(int arr[])
{
	srand(time(NULL));
    int i;
    int s = 0;
    for (i = 0; i <= 20; i++)
    {
        arr[i] = rand()%20;
        printf("arr[%d] = %d\n",i,arr[i]);
        s += arr[i];
    }
    printf("The sum of random value is %d\n",s);
}

int tangdan (int arr[])
{
    int i,j;
    for ( i = 0; i < 20-1; i++)
    {
        for ( j = 20-1; j > i; j--)
        {
            if (arr[j-1] > arr[j])
            {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("Mang duoc sap xep tang dan: \t");
    for ( i = 0; i < 20; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
