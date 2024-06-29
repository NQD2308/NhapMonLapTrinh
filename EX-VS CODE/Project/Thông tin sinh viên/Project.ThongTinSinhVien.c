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


struct Sinhvien		//Khai báo các thông tin cần thiết trong câu lệnh struct khi lập một danh sách
{
    char MSSV[10];
    char ten[20];
    struct ngaysinh ns; 	//Câu lệnh struct lồng
	char noisinh[30];
	char lop[30];
	float diemtoan;
	float diemtriet;
	float diemav;
	float dtb;
	char xeploai[30];
};
typedef struct Sinhvien sinhvien;

int import(sinhvien sv[],int *pn);
int exportt(sinhvien sv[], int *pn);
int Timsv_MSSV(sinhvien sv[], int *pn, char maso[]);
int Timsn_Lop(sinhvien sv[], int *pn, char lophoc[]);
int Timsv_rank(sinhvien sv[], int *pn, char rank[]);
void Enter(char x[]);

void SET_COLOR(int color) // Chương trình đổi màu
{
	WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}

int i,n;

int main()
{
	sinhvien sv[100];
	int c;
	char maso[10];
	char lophoc[30];
	char rank[20];
	int *pn;
	pn = (int *)malloc(n * sizeof(int));

	SET_COLOR(7);
	do
	{
	SET_COLOR(5); 		
	printf("\n\t\t\t========================= MENU =========================\n\n"); //Lập menu cho chuong trình
	SET_COLOR(214);	
	printf(" 1. Enter student information ('o'<)\t\t\t");
	printf(" 4. Find students(based on ID class) (^O^)\n");
	printf(" 2. print student list (>'o')\t\t\t\t");	
	printf(" 5. print list(base on academy performance) (*^-^*)\n");
	printf(" 3. Find students(base on ID students) (-_-)\t\t");
	printf(" 6. Exit (^..^)\n\n");
	SET_COLOR(5);
	printf("\t\t\t  ======================= END =======================");
	
		SET_COLOR(8);
		printf("\n\nChoose: ");			
		scanf("%d", &c);
		system("cls"); //Lệnh xóa màn hình
		SET_COLOR(7);
		
		switch(c)									//Dùng lệnh rẻ nhánh switch case để đi vào các mục trong menu
		{
			case 1:	import(sv,pn); break;
				
			case 2: exportt(sv,pn);	break;

			case 3:
			
				printf("\nEnter ID student: "); fflush(stdin);
				gets(maso);
				SET_COLOR(214);
				printf("\n ---------------------------------------------------------------------------------------------\n");
				SET_COLOR(12);
				printf("  %-10s %-15s %-10s %-10s %-10s %-10s %-12s %s", "ID", "FULL NAME", "CLASS","MATH","PHISICS",
				"ENGLISH","AVERAGE","CONDUCT");
				SET_COLOR(214);
				printf("\n ---------------------------------------------------------------------------------------------\n");
				SET_COLOR(7);
				Timsv_MSSV(sv,pn,maso);
				break; 	
			
			case 4:
			
				printf("\nEnter class: "); fflush(stdin);
				gets(lophoc);
				SET_COLOR(12);
				printf("\n -------------------------------------------------------------------------------------------\n");
				SET_COLOR(18);
				printf("  %-10s %-15s %-10s %-10s %-10s %-10s %-10s %s", "ID", "FULL NAME", "CLASS","MATH","PHISICS",
				"ENGLISH","AVERAGE","CONDUCT");
				SET_COLOR(12);
				printf("\n -------------------------------------------------------------------------------------------\n");
				SET_COLOR(7);
				Timsn_Lop(sv,pn,lophoc);
				break;

			case 5:

				printf("\nEnter academic performance: "); fflush(stdin);
				gets(rank);
				SET_COLOR(7);
				printf("\n -------------------------------------------------------------------------------------------\n");
				SET_COLOR(195);
				printf("  %-10s %-15s %-10s %-10s %-10s %-10s %-10s %s", "ID", "FULL NAME", "CLASS","MATH","PHISICS",
				"ENGLISH","AVERAGE","CONDUCT");
				SET_COLOR(7);
				printf("\n -------------------------------------------------------------------------------------------\n");
				Timsv_rank(sv,pn,rank);
				break;
			
			case 6:
			
				SET_COLOR(3);
				printf ("\n\t\tTHANK YOU FOR USING AND HAVE A NICE DAY! (^w^)\n"); 
				SET_COLOR(7);
				break;
				
			default:
			
				SET_COLOR(12);
				printf("Please! Choose from the list. (^v^!)");
				SET_COLOR(7);
				break;
		}		
		getch();	
	}while(c != 6); 
}

int import(sinhvien sv[], int *pn)			//Tạo file và nhập thông tin sinh viên
{	
	char filename[100];
	printf("\nFollow the link C:\\Users\\PC\\Desktop\\'Filename'.'Fotmat' ");			
	printf("\nEnter link or filename: "); fflush(stdin);			//Tạo file ghi
	fgets(filename, sizeof(filename), stdin);					
	Enter(filename);
	
	SET_COLOR(12);
    FILE *f;								
    f = fopen(filename,"wt");			//mở và ghi file ở dạng nhị phân
	if(f == NULL)			
    {	
        printf("\nCan't open file to write!!! (T^T)");
        return 0;
    }
    
	SET_COLOR(7);
	printf("\nEnter the number of stdents: "); fflush(stdin);
    scanf("%d", pn);
    SET_COLOR(5);
	printf("\n\tFILL DOWN STUDENT INFORMATION");
	SET_COLOR(7);
	
	fprintf(f," %d\n", *pn);
			
    for(i = 1; i <= *pn; i++)
    { 	
    	SET_COLOR(214); 
    	printf("\n\nEnter student information %d",i);
		SET_COLOR(7);	
    	printf("\nID	  : "); fflush(stdin);
    	scanf("%s",sv[i].MSSV);
    	printf("Full Name : ");fflush(stdin);
    	gets(sv[i].ten);
    	printf("Date	  : ");fflush(stdin);
        scanf("%d %d %d",&sv[i].ns.ngay, &sv[i].ns.thang, &sv[i].ns.nam);
		printf("Birthplace: ");fflush(stdin);
		gets(sv[i].noisinh);
		printf("Class	  : ");fflush(stdin);
		gets(sv[i].lop);
		
		do
		{
			SET_COLOR(7);
			printf("Score of math	: ");
			scanf("%f",&sv[i].diemtoan);
			SET_COLOR(12);
		}while(sv[i].diemtoan < 0 && printf("   Please! Enter the score from 0 to 10.\n")|| sv[i].diemtoan > 10 && printf("   Please! Enter the score from 0 to 10.\n"));
	 	SET_COLOR(7);
	 	do
	 	{
	 		SET_COLOR(7);
	 		printf("Score of Phisics: ");fflush(stdin);
			scanf("%f",&sv[i].diemtriet);
			SET_COLOR(12);
		}while(sv[i].diemtriet < 0 && printf("   Please! Enter the score from 0 to 10.\n")|| sv[i].diemtriet > 10 && printf("   Please! Enter the score from 0 to 10.\n"));
		SET_COLOR(7);
		do
		{
			SET_COLOR(7);
			printf("Score of English: ");fflush(stdin);
			scanf("%f",&sv[i].diemav);
			SET_COLOR(12);
		}while(sv[i].diemav < 0 && printf("   Please! Enter the score from 0 to 10.\n")|| sv[i].diemav > 10 && printf("   Please! Enter the score from 0 to 10.\n"));
		SET_COLOR(7);
		
		sv[i].dtb = (sv[i].diemav + sv[i].diemtoan + sv[i].diemtriet)*1.0/3;
		printf("Average score   : %.1f", sv[i].dtb);fflush(stdin);

		//xếp loại6
		
		if(sv[i].dtb >= 0 && sv[i].dtb < 5)
			strcpy(sv[i].xeploai,"Weak");			//Hàm ctrpcy chữa trong thư viện string.h và crtring có chức năng copy toàn bộ chuỗi chỉ định
		
		else if(sv[i].dtb >= 5 && sv[i].dtb < 7)
			strcpy(sv[i].xeploai,"Average");

		else if(sv[i].dtb >= 7 && sv[i].dtb < 8)
			strcpy(sv[i].xeploai,"Good");

		else if(sv[i].dtb >=8 && sv[i].dtb < 9)
			strcpy(sv[i].xeploai,"Very_good");
		
		else
			strcpy(sv[i].xeploai,"Excellent");		
			
		fprintf(f,"\n%d",i);
		fprintf(f,"  %-10s",sv[i].MSSV);
		fprintf(f," %-15s",&sv[i].ten);
		fprintf(f," %02d/%02d/%04d",sv[i].ns.ngay, sv[i].ns.thang, sv[i].ns.nam);
		fprintf(f,"           %-20s",&sv[i].noisinh);
		fprintf(f," %-10s",sv[i].lop);
		fprintf(f," %-10.1f",sv[i].diemtoan);
		fprintf(f," %-10.1f",sv[i].diemtriet);
		fprintf(f," %-10.1f",sv[i].diemav);
		fprintf(f," %-10.1f",sv[i].dtb);
		fprintf(f,"%s\n",sv[i].xeploai);
	}
	fclose(f); 			//Đóng file
}

int exportt(sinhvien sv[], int *pn)			//Xuất và đọc thông tin sinh viên
{
	char filename[100];
	printf("\nFollow the link C:\\Users\\PC\\Desktop\\'Filename'.'Fotmat'\n");
	printf("Enter link or filename: "); fflush(stdin);					//Mở file được xuất
	fgets(filename, sizeof(filename), stdin);
	Enter(filename);

	FILE* f;
	f = fopen(filename, "r");			// Mở và đọc theo đang nhị phân 'rb' = read binary. 
	if (f == NULL)							
	{
		SET_COLOR(12);
		printf("\nCan't open file to read or this file don't exist !!! (T^T)");
		SET_COLOR(7);
		return 0;
	}
	
	SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------------------------------------------------------"
	"----------------\n");
	SET_COLOR(3);
	printf("   %-10s %-15s %-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "ID", "FULL NAME", "DATE", "BIRTHPLACE", 
	"ClASS","MATH","PHISICS","ENGLISH","AVERAGE","CONDUCT");
	SET_COLOR(214);
	printf("---------------------------------------------------------------------------------------------------------------------------"
	"--------------\n");
	SET_COLOR(7);
	
	fscanf(f,"%d", pn);
//	printf("So luong: %d", *pn);
	
	for(i = 1; i <= *pn; i++)
	{
		char tx[30];

		fscanf(f,"%d",&i);
		printf("\n%d.",i);
		
		fscanf(f,"%s",&sv[i].MSSV);
		printf(" %-10s",sv[i].MSSV);
		
		fscanf(f,"%s",&sv[i].ten);
		printf(" %-15s",sv[i].ten);
		
		fscanf(f,"%02d/%02d/%4d", &sv[i].ns.ngay, &sv[i].ns.thang, &sv[i].ns.nam);
		printf(" %02d/%02d/%4d",sv[i].ns.ngay, sv[i].ns.thang, sv[i].ns.nam);
		
		fscanf(f,"%s",&sv[i].noisinh);
		printf("            %-20s",sv[i].noisinh);
		
		fscanf(f,"%s",&sv[i].lop);
		printf("% -10s",sv[i].lop);
		
		fscanf(f,"%f",&sv[i].diemtoan);
		printf(" %-10.1f",sv[i].diemtoan);
		
		fscanf(f,"%f",&sv[i].diemtriet);
		printf(" %-10.1f",sv[i].diemtriet);
		
		fscanf(f,"%f",&sv[i].diemav);
		printf(" %-10.1f",sv[i].diemav);
		
		fscanf(f,"%f",&sv[i].dtb);
		printf(" %-10.1f",sv[i].dtb);
		
		fscanf(f,"%s",&sv[i].xeploai);
		printf(" %s\n",sv[i].xeploai);
		
//		fgets(sv[i].xeploai, 20, f);
//		printf("%s",sv[i].xeploai);	
//		printf("%s",fgets(sv[i].xeploai,20,f));
//		fscanf(f,"%s",&sv[i].xeploai);
	}
	fclose(f);
}

int Timsv_MSSV(sinhvien sv[], int *pn, char maso[])			//Tìm sinh viên dựa vào mã số sinh viên
{
	int count = 0;
	for(i = 1; i <= *pn; i++)
	{
		if(strcmp(maso,sv[i].MSSV) == 0)   				//hàm strcmp chứa trong thư viện string.h có chức nắng so sánh giữa 2 giá trị
		{	
			printf("\n  %-10s %-15s %-10s %-10.1f %-10.1f %-10.1f %-13.1f %s",
			sv[i].MSSV,sv[i].ten,sv[i].lop,sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
			count++;
			break;
		}
	}
	if (count == 0)
	{
		printf("Can not find students with ID %s",maso);
	}
	return 0;
}


int Timsn_Lop(sinhvien sv[], int *pn, char lophoc[])			//Tìm sinh viên dựa vào mã lớp sinh viên
{
	int count = 0;
	for(i = 1; i <= *pn; i++)
	{
		if(strcmp(sv[i].lop,lophoc) == 0)
		{	
			printf("\n  %-10s %-15s %-10s %-10.1f %-10.1f %-10.1f %-10.1f %s\n",sv[i].MSSV,sv[i].ten,sv[i].lop,
			sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
			count++;
		}
	}
	if (count == 0)
	{
		printf("There are no students in class %s or this class is not open yet!!!",lophoc);
	}
}

int Timsv_rank(sinhvien sv[], int *pn, char rank[])		//Tìm sinh viên dựa vào học lực của sinh viên
{
	int count = 0;
	for ( i = 1; i <= *pn; i++)
	{
		if(strcmp(sv[i].xeploai,rank) == 0)
		{
			printf("\n  %-10s %-15s %-10s %-10.1f %-10.1f %-10.1f %-10.1f %s\n",sv[i].MSSV,sv[i].ten,sv[i].lop,
			sv[i].diemtoan,sv[i].diemtriet,sv[i].diemav,sv[i].dtb,sv[i].xeploai);
			count++;
		}
	}
	if(count == 0)
	{
		printf("No student with an academic performance %s",rank);
	}
}

void Enter(char x[])		
{
	size_t len = strlen(x);
	if(x[len-1]=='\n')
	{
		x[len-1]='\0';
	}
}
