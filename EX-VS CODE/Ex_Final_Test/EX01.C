#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
    FILE *f;
    f = fopen("D:\\Hoa Sen University\\IT\\NMLT\\EX-VS CODE\\Ex_Final_Test\\EX01.Final_Test.txt", "w+");
    if (f == NULL)
    {
        printf("Can't open file to write!");
        exit(1);
    }
    char S1[100]= "Chao ban! ";
    char S2[] = "Chuc mung ban den voi mon hoc Nhap Mon Lap Trinh.";

    strupr(strcat(S1,S2));
    
    int i;
    int letter = 0;
    for(i = 0; i <= strlen(S1); i++)
    {
    	if(isalpha(S1[i]))
    		letter++;
	}
    printf("Letter: %d\n\n",letter);
    
    for (i = 0; i < 10; i++)
    {
        printf("%s\n",S1);
        fprintf(f,"%s\n",S1);
    }
    fclose(f);
    getch();
}
