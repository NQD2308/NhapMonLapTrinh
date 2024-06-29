#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    int ch;
    printf("Choose number[1-12]: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: printf("Jenuary"); break;
    
    case 2: printf("February"); break;

    case 3: printf("March"); break;
        
    case 4: printf("April"); break;

    case 5: printf("May"); break;

    case 6: printf("June"); break;

    case 7: printf("July"); break;

    case 8: printf("August"); break;

    case 9: printf("September"); break;

    case 10: printf("October"); break;

    case 11: printf("November"); break;

    case 12: printf("December"); break;

    default: printf("Enter again, pls!"); break;
    }
    getch();
}