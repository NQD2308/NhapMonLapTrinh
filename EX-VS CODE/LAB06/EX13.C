#include<stdio.h>
#include<conio.h>

int main()
{
    printf("-- Chuong trinh nhap lien tuc cac so nguyen duong va tinh trung binh cac so chan le vua nhap --\n\n");

    int c;
    printf("\t\t========== MENU ==========\n\n");
    printf("1. Tinh trung binh so chan.\t");
    printf("2. Tinh trung binh so le.\n\n");
    printf("\t\t========== END ==========\n");
    printf("\nChoose programming you want: ");
    scanf("%d",&c);
    
    if(c == 2)
    {
    int n;
    int sl=0, counttongle=0, countle=0;
    float tbl=0;
    do
        {
            printf("Enter number: ");
            scanf("%d",&n);
        
            for(int i=0; i<n; i++)
            {
                if(n >= 0 && n%2 != 0)
                {
                    counttongle++;
                }
            }

            while (1)
            {
                if(n >= 0 && n%2 != 0)
                    countle++;
                        break;
            }
        
            if(n < 0)
            {
                sl += counttongle;
                tbl = counttongle/countle;
                printf("-> Tong so le: %d\n",counttongle);
                printf("-> Tong so nhap le: %d\n",countle);
                printf("-> Trung binh le: %.2f\n\n",tbl);
            }
        }while(n>=0);
    }
    
    if (c == 1)
    {
        int n;
        int s=0, counttongchan=0, countchan=0;
        float avg;
        do
        {
            printf("Enter number: ");
            scanf("%d",&n);

            for (int i = 0; i<n; i++)
            {
                if (n >= 0 && n%2 == 0)
                {
                    counttongchan++;
                }
                
            }

            while (1)
            {
                if(n >= 0 && n%2 == 0)
                    countchan++;
                    break;
            }
            
            if (n < 0)
            {
                s += counttongchan;
                avg = counttongchan/countchan;
                printf("Tong so chan: %d",counttongchan);
                printf("\nTong so nhap chan: %d",countchan);
                printf("\nTrung binh so chan: %.2f",avg);
            }
            
        } while (n >= 0);
    }
    getch();
}
