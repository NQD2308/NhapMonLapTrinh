#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

struct ngaysinh
{
    int ngay;   
    int thang;
    int nam;
};


struct Quanlysinhvien
{
    char MSSV[10];
    char ten[20];
    struct ngaysinh ns;
	 char noisinh[30];
	 char lop[5];
	 float diemtoan;
	 float diemtriet;
	 float diemav;
	 float dtb;
	 char xeploai[20];
};
typedef struct Quanlysinhvien qlsv;

void import(qlsv sv[],int *pn);
void export1(qlsv sv[], int *pn);
int Timsv_MSSV(qlsv sv[], int *pn, char maso[]);
int Timsn_Lop(qlsv sv[], int *pn, char lophoc[]);
int Timsv_rank(qlsv sv[], int *pn, char rank[]);

int i,n;
int main()
{
	system("cls");
	printf("\t\t==================== MENU ====================\n\n");
	printf(" 1. Nhap thong tin sinh vien\t\t\t");
	printf(" 4. Tim sinh vien(dua vao lop)\n");
	printf(" 2. In danh sach sinh vien\t\t\t");
	printf(" 5. In danh sach(dua vao xep lop)\n");
	printf(" 3. Tim sinh vien(dua vao ID)\t\t\t");
	printf(" 6. Thoat\n\n");
	printf("\t\t =================== END ===================");
	
	
	qlsv sv[100];
	int c;
	char maso[10];
	char lophoc[30];
	char rank[20];
	int *pn;
	pn = (int *)malloc(n * sizeof(int));
	
	do
	{
		printf("\n\nChon muc: ");
		scanf("%d", &c);
		if(c < 1 || c > 6)
		{
			printf("Vui long chon cac ung dung trong muc!");
		}
		else
		{
			if(c == 1)
			{
				
				import(sv,pn);
			}
				
			else if(c == 2)
			{
				printf("\n\t\t\t\t\t\t\t\t\t==================== THONG TIN SINH VIEN ====================\n\n\n");
    			export1(sv,pn);
			}
			
			else if(c == 3)
			{
				printf("Nhap ID sinh vien muon tim: "); fflush(stdin);
				gets(maso);
				printf("\n%-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n\n", "ID", "FULL NAME", "Class","Math","Philosophy","English","AVERAGE SCORE","Rank");
				Timsv_MSSV(sv,pn,maso); 	
			}
			
			else if(c == 4)
			{
				printf("Nhap lop ban muon kiem tra thong tin: "); fflush(stdin);
				gets(lophoc);
				printf("\n   %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n\n", "ID", "FULL NAME", "Class","Math","Philosophy","English","AVERAGE SCORE","Rank");
				Timsn_Lop(sv,pn,lophoc);
			}
			else if(c == 5)
			{
				printf("Tim sinh vien co hoc luc: "); fflush(stdin);
				gets(rank);
				printf("\n   %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n\n", "ID", "FULL NAME", "Class","Math","Philosophy","English","AVERAGE SCORE","Rank");
				Timsv_rank(sv,pn,rank);
			}
			getch();	
		}
	}while(c != 6); 
}



void import(qlsv sv[], int *pn)
{
	printf("\nNhap so luong SV can luu thong tin: ");
    scanf("%d", pn);
    
    for(i = 1; i <= *pn; i++)
    {
		printf("\nNhap Thong tin sinh vien thu %d",i);
    	printf("\nID: "); fflush(stdin);
    	gets(sv[i].MSSV);
    	printf("NAME: ");fflush(stdin);
    	gets(sv[i].ten);
    	printf("DATE: ");fflush(stdin);
        scanf("%d %d %d",&sv[i].ns.ngay, &sv[i].ns.thang, &sv[i].ns.nam);
		printf("Place of birth: ");fflush(stdin);
		gets(sv[i].noisinh);
		printf("Class: ");fflush(stdin);
		gets(sv[i].lop);
		printf("Score of math: ");fflush(stdin);
		scanf("%f",&sv[i].diemtoan);
		printf("Score of philosophy: ");
		scanf("%f",&sv[i].diemtriet);
		printf("Score of English: ");
		scanf("%f",&sv[i].diemav);
		sv[i].dtb = (sv[i].diemav + sv[i].diemtoan + sv[i].diemtriet)*1.0/3;
		printf("Diem trung binh: %.1f",sv[i].dtb);
		//xep loai
		if(sv[i].dtb >= 0 && sv[i].dtb < 5)
			strcpy(sv[i].xeploai,"Yeu");
		
		else if(sv[i].dtb >= 5 && sv[i].dtb < 7)
			strcpy(sv[i].xeploai,"Trung binh");

		else if(sv[i].dtb >= 7 && sv[i].dtb < 8)
			strcpy(sv[i].xeploai,"Kha");

		else if(sv[i].dtb >=8 && sv[i].dtb < 9)
			strcpy(sv[i].xeploai,"Gioi");
		
		else
			strcpy(sv[i].xeploai,"Xuat sac");
		
	}
}

void export1(qlsv sv[], int *pn)
{
	int i;
	printf("   %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n\n", "ID", "FULL NAME", "DATE", "Place of birth", "Class","Math","Philosophy","English","AVERAGE SCORE","Rank");
	
	for(i = 1; i <= *pn; i++)
	{
		printf("%d. %-20s %-20s %02d/%02d/%4d           %-20s %-20s %-20.1f %-20.1f %-20.1f %-20.1f %-20s\n",i, sv[i].MSSV , sv[i].ten,sv[i].ns.ngay, sv[i].ns.thang, sv[i].ns.nam,sv[i].noisinh,sv[i].lop,sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
	}
}

int Timsv_MSSV(qlsv sv[], int *pn, char maso[])
{
	for(i = 1; i <= *pn; i++)
	{
		if(strcmp(maso,sv[i].MSSV) == 0)
		{		
			printf("\n%-20s %-20s %-20s %-20.1f %-20.1f %-20.1f %-20.1f %-20s",sv[i].MSSV,sv[i].ten,sv[i].lop,sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
			break;
		}
		else
		{
			printf("Khong tim thay sinh vien co ID %s",maso);
		}
	}
}

int Timsn_Lop(qlsv sv[], int *pn, char lophoc[])
{
	for(i = 1; i <= *pn; i++)
	{
		if(strcmp(sv[i].lop,lophoc) == 0)
		{	
			printf("\n%d. %-20s %-20s %-20s %-20.1f %-20.1f %-20.1f %-20.1f %-20s\n",i,sv[i].MSSV,sv[i].ten,sv[i].lop,sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
		}
		
		else
		{
			printf("Khong tim thay lop %s hoac lop co ma so %s chua duoc mo",lophoc,lophoc);
		}
	}
}

int Timsv_rank(qlsv sv[], int *pn, char rank[])
{
	for ( i = 1; i <= *pn; i++)
	{
		if(strcmp(sv[i].xeploai,rank) == 0)
		{
			printf("\n%d. %-20s %-20s %-20s %-20.1f %-20.1f %-20.1f %-20.1f %-20s\n",i,sv[i].MSSV,sv[i].ten,sv[i].lop,sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
		}
		
		else
		{
			printf("Khong tim thay sinh vien co hoc luc %s",rank);
		}
	}
}
