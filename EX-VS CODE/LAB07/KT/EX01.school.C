#include<stdio.h>
#include<conio.h>
float dtb(float a, float b, float c);
int main()
{
    float sj1, sj2, sj3;
    printf("Enter scope of subject 1: ");
    scanf("%f",&sj1);
    printf("Enter scope of subject 2: ");
    scanf("%f",&sj2);
    printf("Enter scope of subject 3: ");
    scanf("%f",&sj3);

    printf("GPA is %.1f",dtb(sj1, sj2, sj3));
    getch();
}

float dtb(float a, float b, float c)
{
    float tb = 0;
    tb = (a+b+c)/3;
    return tb;
}
