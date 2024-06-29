#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh M^N --\n");

    int m,n,ct=0;
    printf("\nEnter M: ");
    scanf("%d",&m);
    printf("Enter N: ");
    scanf("%d",&n);

    ct = pow(m,n);
    printf("The result: %d",ct);
    getch();
}
