#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("--Nhap vao 3 so nguyen a, b, c. Giai phuong trinh bac 2: ax2 + bx + c = 0 --\n");
    printf("\nNhap so a: ");
    scanf("%d",&a);
    printf("Nhap so b: ");
    scanf("%d",&b);
    printf("Nhap so c: ");
    scanf("%d",&c);
    printf("Phuong trinh bac 2: %dx^2 + %dx + %d = 0\n", a,b,c);

    int delta = b*b-4*a*c;
    if (a =! 0)
    {
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem.");
        } else {
            float x1 = (-b + sqrt (delta)) / (2 * a);
            float x2 = (-b - sqrt (delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet.\n");
            printf("x1 = %.2f\nx2 = %.2f",x1,x2);
        }
    } else{
        printf("Phuong trinh co nghiem kep.");
        printf("x= %.2f.", -b/2*a);
    }
    getch();
    
    

}
