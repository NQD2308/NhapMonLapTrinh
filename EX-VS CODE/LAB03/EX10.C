#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- chuong trinh in ra bang cuu --\n");

    int n,i,x;
    printf("\nNhap bang cuu chuong can in: ");
    scanf("%d",&n);

    for (i = 1; i < 10; i++)
    {   
        x = n * i;
        printf("%d * %d = %d\n",n,i,x);
    }
    getch();
}
