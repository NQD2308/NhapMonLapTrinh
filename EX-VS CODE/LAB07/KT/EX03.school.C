#include<stdio.h>
#include<conio.h>
int loop();
int main()
{
	loop();
    getch();
}

int loop()
{
	char word[100];
    printf("Enter word: ");
    gets(word);
    
	for(int i=0; i<10; i++)
	{
		printf("%s\n", word);
	}
}


