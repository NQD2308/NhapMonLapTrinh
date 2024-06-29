#include<stdio.h>
#include<conio.h>

int import(int arr[], int n);
int export(int arr[], int n);

int main()
{
    int n;
    int *arr;
    arr = (int *)malloc(n *sizeof(int));

    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);

    import(arr,n);
    export(arr,n);

    getch();
}

int import(int arr[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", arr + i);
    } 
}

int export(int arr[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",  *(arr + i));
    }
}
