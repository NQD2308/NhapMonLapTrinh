#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
    FILE *fw;
    fw = fopen("Ontatchuoi.txt","w+");
    FILE *fr;
    fr = fopen("Ontatchuoi.txt","w+");
    if(fw == NULL)
    {
        printf("Can't open file to write!");
        exit(1);
    }
    char S1[100] = "Chao ban! ";
    char S2[] = "Chuc mung ban den voi mon hoc Nhap Mon Lap Trinh.";

    strupr(strcat(S1,S2));
    fprintf(fw,"%s",S1);

    int i;
    int letter = 0;
    for ( i = 0; i < strlen(S1); i++)
    {
        if (isalpha(S1[i]))
        {
            letter++;
        }
    }
    printf("Letter: %d\n",letter);
    
    for ( i = 0; i < 10; i++)
    {
        printf("%s\n",S1);
    }
    fclose(fw);

    char ch;
    while ((ch = fgetc(fr)) != EOF)
    {
        putchar(ch);
    }
    fclose(fr);
    getch();
}
