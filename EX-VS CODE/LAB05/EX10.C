#include<stdio.h>
#include<conio.h>

void fabonaci(int n)
{
	printf("%d so Fibonaci dau tien: \n",n);
    long long f0 = 0, f1 = 1, fn;
    int i;
    for(i=0; i<n; i++)
    {
    	if(i<=1){
    		fn = i;
		} else {
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
    		printf("F%d = %lld\n",i,fn);
    }
}
int main()
{
    printf("-- Chuong trinh in n so Fabonaci dau tien --\n");

    int n;
    printf("\nEnter n to know fabonaci: ");
    scanf("%d",&n);

    fabonaci(n);
    getch();
}
