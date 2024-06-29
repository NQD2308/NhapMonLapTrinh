#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh xac nha so hoan thien --\n");

    int n,i,uocso=0;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    
	for(int i=1; i < n; i++ )
    {
        if (n % i == 0)
        {
            uocso += i;
        } 
    }
    if (uocso == n)
    {
        printf("%d la so hoan thien.",n);
    }
    else
        printf("%d khong phao la so hoan thien.",n);
        
    getch();
}
