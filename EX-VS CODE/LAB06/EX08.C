#include<stdio.h>
#include<conio.h>

int main()
{
    int c,xn;
    do
    {
	
    printf("\t========== MENU ==========\n");
    printf("\n1. Chu in thuong.\t");
    printf("\t2. Chu in hoa.\n");
    printf("\n\t========== END ==========\n");
    printf("\nChon loai chu: ");
    scanf("%d",&c);
	}while(c<1 && printf("Error, Pls, enter 1 va 2.") || c>2 && printf("Error, Pls, enter 1 va 2.\n\n"));
	do
	{
    printf("\n\t========== MENU ==========\n");
    printf("\n1. Chu in xuoi.\t");
    printf("\t2. Chu in nguoc.\n");
    printf("\n\t==========END ==========\n");
    printf("\nChon loai chu: ");
    scanf("%d",&xn);
	}while(xn<1 && printf("Error, Pls, enter 1 va 2.") || xn>2 && printf("Error, Pls, enter 1 va 2."));
    printf("\n");

    if (c == 2 && xn == 1)
    {
    for (char i = 65; i <= 90; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(c == 2 && xn == 2)
    {
    	for (char i = 90; i >= 65; i--)
        {
            printf("%c\t",i);
        }
    }
    else if(c == 1 && xn == 1)
    {
    	for (char i = 97; i <= 122; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(c == 1 && xn == 2)
    {
    	for (char i = 122; i >= 97; i--)
        {
            printf("%c\t",i);
        }
    }
    getch();
}
