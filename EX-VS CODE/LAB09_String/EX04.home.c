#include<stdio.h>
#include<conio.h>
#include<string.h>

void Enter(char x[])
{
    size_t len = strlen(x);
    if(x[len-1] == '\n')
    {
        x[len-1] = '\0';
    }
}

int main()
{
    char ten[50];
    printf("Nhap ten: ");
    fgets(ten,sizeof(ten), stdin);
	Enter(ten);
	
    strrev(ten);
    printf("\nS = %s\n",ten); 


    getch();
}