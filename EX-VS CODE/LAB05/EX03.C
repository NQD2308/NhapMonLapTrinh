#include<stdio.h>
#include<conio.h>

/*int USCLN(int a,int b)
{
    if (b == 0)
        return a;
    return USCLN(b, a % b);
    
}

int BSCNN(int a, int b)
{
    return (a * b)/ USCLN(a, b);
}

int main()
{
    printf("-- Chuong trinh tim UCLN va BSCNN --\n");

    int a,b;
    printf("\nNhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);

    printf("USCLN cua %d va %d la %d",a,b,USCLN(a,b));
    printf("\nBSCNN cua %d va %d la %d",a,b,BSCNN(a,b));
    getch();
}*/

int main()
{
    printf("-- programming find UCLN va BSCNN --\n");

    int a,b;
    do{
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    }while(a < 0 || b < 0);

    if (a == 0 && b == 0)
    {
        printf("Don't have value of USCLN and BSCNN.");
    } else if(a == 0 || b == 0)
    {
        printf("Don't have value of BSCNN, USCLN = %d",(a == 0)?b:a);
    }
    else // a> 0 && b > 0
    {
        int bc = a * b;
        while (a != b)
        {
            if (a > b)
            {
                 a = a - b;
            }else{
                b = b - a;
            }
        }
        printf("The result of USCLN = %d\n",a);
        printf("The result of BSCNN = %d",bc/a);
    }
    getch();
}

