#include<stdio.h>
#include<conio.h>
#include<math.h>


long long cs2(int n)
{
    long long x =0;
    int i=0;
    while (n > 0)
    {
        x += (n%2) * pow(10,i);
        ++i;
        n /= 2;
    }
        return x;
}

int main()
{
    printf("-- Nhap vao mot so nguyen duong co so 10. Chuyen so nay sang co so 2 --\n");
    int n;
    printf("\nNhap co so muon doi sang nho phan: ");
    scanf("%d",&n);
    printf("co so 10 cua %d doi sang co so 2 la: %d",n,cs2(n));

    getch();
}

