#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Bang cuu chuong --\n");

    int n,i,bcc;
    printf("\nEnter bang cuu chuong: ");
    scanf("%d",&n);

    for (i = 1; i <= 10; i++)
    {
        bcc = n * i;
        printf("%d * %d = %d\n",n,i,bcc);
    }
    getch();
}
