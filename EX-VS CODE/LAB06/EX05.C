#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh in ra bang cuu chuong --\n");

    int n,i,bcc=0;
    printf("\nEnter the number: ");
    scanf("%d",&n);

    for (i = 1; i <= 10; i++)
    {
        bcc = n * i;
        printf("%d * %d = %d\n",n,i,bcc);
    }
    getch();
}
