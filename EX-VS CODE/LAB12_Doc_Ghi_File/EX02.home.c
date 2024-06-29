#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("D:\\Hoa Sen University\\IT\\NMLT\\EX-VS CODE\\LAB12_Doc_Ghi_File\\input.txt", "r");
    if (f == NULL)
    {
        printf("Can't opem file!!!");
        exit(1);
    }
    
    int n,i;
    int a[100];
    
    fscanf(f,"%d\t", &n);
    a = new int[n];
    for(i = 0; i < 10; i++)
    	fscanf(f,"%d",&a[i]);
//    	printf("%d\t", n);
    fclose(f);
    getch();
}
