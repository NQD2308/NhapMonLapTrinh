#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float arrtong(int n, float arr[])
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float arrtongchan(int n, float arr[])
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] - (int)arr[i] == 0)
        {
            if ((int)arr[i]%2 == 0)
            {
                sum += arr[i];
            }
        }  
    }
    return sum;
}

float arrtongle(int n, float arr[])
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] - (int)arr[i] == 0)
        {
            if ((int)arr[i]%2 == 1)
            {
                sum += arr[i];
            }
        }  
    }
    return sum;
}

int main()
{
    int n,i=0;
    float arr[10];
    do
    {
        printf("Enter number of array[maximum 10]: ");
        scanf("%d",&n);
    } while (n <= 0 || n >= 10);
    
    for(i = 0; i < n; i++)
        {
            printf("arr[%d] = ",i);
            scanf("%f",&arr[i]);
            
			while(arr[i] < -10 || arr[i] > 10)
			{
				printf("Pls! Enter again.^^\n");
				printf("arr[%d] = ",i);
            	scanf("%f",&arr[i]);	
			}
    	}
    printf("The array sum %.1f\n",arrtong(n,arr));
    printf("The array even sum %.1f\n",arrtongchan(n,arr));
    printf("The array odd sum %.1f",arrtongle(n,arr));
}
