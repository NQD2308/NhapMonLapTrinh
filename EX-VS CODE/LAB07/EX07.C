#include<stdio.h>
#include<conio.h>
#include<math.h>

int congdon(int n);
int congtru(int n);
float phansomautangdan(int n);
float phansomaucongdon(int n);
float f1(int n);
float f2(int n);

int main()
{
    int n;
    do
    {
    printf("\nEnter number: ");
    scanf("%d",&n);

    congdon(n);
    congtru(n);
    phansomautangdan(n);
    phansomaucongdon(n);
    f1(n);
    f2(n);
    }while(1);
    getch();
}

int congdon(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("\nT1= 1+2+3+4+ ... +n");
    printf("\nT1 = %d\n",s);
}

int congtru(int n)
{
    int p = 0, tmp = 1;
    for (int i = 1; i <= n; i++)
    {
        p += tmp*i;
        tmp *= -1;
    }
    printf("\nT2= 1-2+3-4+ ... +(-) n");
    printf("\nT2 = %d\n",p);
}

float phansomautangdan(int n)
{
    float s=0;
    for (int i = 1; i <= n; i++)
    {
        s += 1.0/i;
    }
    printf("\nT3= 1 + 1/2 + 1/3 + ... + 1/n");
    printf("\nT3 = %.1f\n",s);
}

float phansomaucongdon(int n)
{
    float s=0,t=0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
        t += 1.0/s;
    }
    
    printf("\nT4= 1 + 1/(1+2) + 1/(1+2+3)+ ...+ 1/(1+2+...+n)");
    printf("\nT4 = %.1f\n",t);
}

float f1(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
       s = pow(i,i)/ pow(i,(i)/i);
    }
    printf("\nF1 = pow(n,n)/ pow(n,(n)/n)");
    printf("\nF1 = %.1f\n",s);
}

float f2(int n)
{
    int gt = 1, t = 0;
    float s= 0;
    for (int i = 1; i <= n; i++)
    {
        s += (gt * i) / (t+i);
    }

    printf("\nF2 = n! / (1+2+3+...+n)");
    printf("\nF2 = %.1f\n",s);
}
