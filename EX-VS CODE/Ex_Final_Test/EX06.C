#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    int ch;
    printf("Choose number[1-7]: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: printf("Monday"); break;
    
    case 2: printf("Tuesday"); break;

    case 3: printf("wednesday"); break;
        
    case 4: printf("Thursday"); break;

    case 5: printf("Friday"); break;

    case 6: printf("Saturday"); break;

    case 7: printf("Sunday"); break;

    default: printf("Enter again, pls!"); break;
    }
    getch();
}