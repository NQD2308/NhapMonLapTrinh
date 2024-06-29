#include<stdio.h>
#include<conio.h>

int dieukien(int dtb);
int main()
{
    char ten[20];
    int maso,n;
    float toan,ly,hoa,dtb=0;
	
	printf("===== THONG TIN HOC SINH =====\n");
	do
	{
	printf("\nNhap so hoc sinh can luu thong tin: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
    printf("\nNhap MSSV: ");
    scanf("%d",&maso);
    fflush(stdin);
    printf("Nhap ten hoc sinh: ");
    gets(ten);
    printf("Nhap diem toan: ");
    scanf("%f",&toan); 
    printf("Nhap diem ly: ");
    scanf("%f",&ly);
    printf("Nhap diem hoa: ");
    scanf("%f",&hoa);

    dtb = (toan + ly + hoa)/3;
	
	printf("\nMSSV           : %d",maso);
	printf("\nTen hoc sinh   : %s",ten);
	printf("\nDiem trung binh: %.1f",dtb);
	
	dieukien(dtb);
	}
	}while(1);
    getch();
}

int dieukien(int dtb)
{
	if (dtb < 5)
        printf("\nDanh hieu   : hoc sinh kem.\n");
    
    else if(dtb >= 5 && dtb < 7)
        printf("\nDanh hieu   : hoc sinh trung binh.\n");
    
    else if(dtb >= 7 && dtb < 9)
        printf("\nDanh hieu   : hoc sinh gioi.\n");
    
    else
        printf("\nDanh hieu   : hoc sinh xuat sac.\n");
	
	return dtb;	
}
