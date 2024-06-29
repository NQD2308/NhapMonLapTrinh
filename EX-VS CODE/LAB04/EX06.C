#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("-- Chuong trinh can bac hai --\n");

    int a,b,c;
    printf("Nhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);
    printf("Nhap gia tri c: ");
    scanf("%d",&c);

    float delta = 0,x=0,x1=0,x2=0;
    delta = b*b - 4*a*c;

    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem.");
    
        if (delta == 0)
            {
                 x = -b/(a*a);
                printf("Phuong trinh co nghiem kep x1 = x2 = %.2f",x);
            }
    else
    {
        x1 = (-b + sqrt(delta)/(2*a));
        x2 = (-b - sqrt(delta)/(2*a));

        printf("Phuong tring co 2 nghiem phan biet\nx1 = %.2f\nx2 = %.2f");
    }
    getch();
}
