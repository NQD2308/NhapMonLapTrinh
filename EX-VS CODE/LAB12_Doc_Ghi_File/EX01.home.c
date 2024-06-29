#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	int tam=0;
    int s[30];
	FILE *f;
    f = fopen("Array.txt","w");
    if (f == NULL)
    {
        printf("Can't opem file!!!");
        exit(1);
    }

    printf("Enter number of array: ");
    scanf("%d",&n);
    
    for(i = 0; i < n; i++)
    {
    	printf("arr[%d] = ",i);
        scanf("%d",&s[i]);
	}
	
	for(i=0; i<n-1; i++)
		for(j=n-1; j>i; j--)
			if(s[j-1]>s[j])
			{
				int tam=s[j-1];
				s[j-1] = s[j];
				s[j] = tam;
}
    
    for(i = 0; i < n; i++)
		fprintf(f,"%d\t",s[i]);
    fclose(f);
    getch();
}
