#include<stdio.h>
#include<conio.h>

void import(int arr[],int n);
void export(int arr[], int n);
int demarram(int arr[], int n);
int sumarray(int arr[], int n);
int doixung(int arr[], int n);
int timarray(int arr[], int n);

int main()
{
    int n;
    int arr[100];

    printf("Nhap so luong phan tu: ");
    do
    {
        scanf("%d",&n);
        if (n < 0 || n > 100)
        {
            printf("Nhap so luong phan tu: ");
        }  
    } while (n < 0 || n > 100);
    printf("\n");
    import(arr, n);
    printf("\n--------------------\n\n");
    export(arr, n);
    printf("\n--------------------\n\n");
    demarram(arr, n);
    printf("\n--------------------\n\n");
    sumarray(arr, n);
    printf("\n--------------------\n\n");
    if (doixung(arr, n) == 1)
        printf("Array doi xung!");
    
    else
        printf("Array khong doi xung!\n");
    printf("\n--------------------\n\n");
    timarray(arr, n);

    getch();
}

void import(int arr[],int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Inport arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}

void export(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Export arr[%d] = %d\n",i,arr[i]);
    }
}

int demarram(int arr[], int n)
{
    int i;
    int count = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("arr[%d] = %d\n",i,arr[i]);
            count++;
        }     
    }
    printf("tong so array am: %d\n",count);
}

int sumarray(int arr[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of array is %d\n",sum);
}

int doixung(int arr[], int n)
{
    int i;
    for (i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return -1;
            break;
        }
    }
    return 1;
}

int timarray(int arr[], int n)
{
    int f,i;
    printf("Enter number you want to find in array: ");
    scanf("%d",&f);

    for (i = 0; i < n; i++)
    {
        if(arr[i] == f)
            printf("Phan tu %d co trong mang a[%d]\n",f,i);
    }
}
