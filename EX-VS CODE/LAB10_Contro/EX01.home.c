#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,x;
   int *pa,*pb;
   pa = (int *)malloc(sizeof(int));
   pb = (int *)malloc(sizeof(int));

    printf("Enter value a: ");
    scanf("%d", pa);
    printf("Enter value b: ");
    scanf("%d", pb);

    if (pa == 0)
    {
        if (pb == 0)
        {
            printf("Phuong trinh vo so nghiem!");
        }
        else
        {
            printf("Phuong trinh vo nghiem!");
        }
    }
    else
    {
        x = -(*pb)/(*pa);
            printf("x = %d",x);
    }
    getch();
}
