#include<stdio.h>
#include<conio.h>

int Chuongtrinh(int x, int y);

int main()
{
    printf("===== Chuong trinh kiem tra x co chia het cho y khong =====\n");

    int x,y;
    do
    {
    printf("\nEnter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    Chuongtrinh(x,y);
    }while(1);
    getch();
}

int Chuongtrinh(int x, int y)
{
    int s=0;

        if (x%y == 0)
        {
            s = x/y; 
            printf("%d / %d = %d\n",x,y,s);
            printf("-> x co the chia het cho y\n");
        }
      else
            printf("x khong chia het cho y");  
   
}
