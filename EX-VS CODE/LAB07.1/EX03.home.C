#include<stdio.h>
#include<conio.h>

int congiap(int n);

int main()
{
    printf("\t===== Nhap nam de biet con giap =====\n\n");

    int y,c;
    printf("Esc - Thoat");
    do
    {
    printf("\n\nEnter your year: ");
    scanf("%d",&y);

    congiap(y);
    c = getch();
    }while(c != 27);
}

int congiap(int n)
{
   char canh[10][5] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
   char chi[12][5] = {"Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};

   printf("%d - %s %s",n, canh[n%10],chi[n%12]);
   return 0;
}
