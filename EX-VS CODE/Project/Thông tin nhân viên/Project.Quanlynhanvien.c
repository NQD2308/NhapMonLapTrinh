#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

struct birthday
{
    int day;
    int month;
    int year;
};
typedef struct birthday bd;

struct Information
{
    int id;
    char name[50];
    struct birthday bd;
    double salary;
};
typedef struct Information staff;

int Information(staff st[], int *n);
int print(staff st[], int n);
int Findstaff_ID(staff st[], int n);
int Findstaff_year(staff st[], int n);
int Findstaff_salary(staff st[], int n);

void Enter(char x[])
{
	size_t len = strlen(x);
	if(x[len-1]=='\n')
	{
		x[len-1]='\0';
	}
}

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

int main()
{
	staff st[100];
    int c,n;
    SET_COLOR(5); 
    printf("\t\t========================= MENU =========================\n\n");       		//Lập menu cho chuong trình
	SET_COLOR(214);	
	printf(" 1. Enter staff information ('o'<)\t\t");
	printf(" 4. Find staff (base on year of birthday) (^O^)\n");
	printf(" 2. print staff list (>'o')\t\t\t");	
	printf(" 5. Find staff (base on salary) (*^-^*)\n");
	printf(" 3. Find staff(base on ID staff) (-_-)\t\t");
	printf(" 6. Exit (^..^)\n\n");
	SET_COLOR(5);
	printf("\t\t  ======================= END =======================");
    
    
    do
    {
		SET_COLOR(7);
    	printf("\n\nChoose: ");
    	scanf("%d",&c);
        switch (c)
        {
            case 1: Information(st,&n); break;

            case 2: print(st,n); break;

            case 3: Findstaff_ID(st, n); break;

            case 4: Findstaff_year(st, n); break;

            case 5: Findstaff_salary(st, n); break;

            case 6: printf ("\n\t\tTHANK YOU FOR USING AND HAVE A NICE DAY! (^w^)\n"); break;

            default: printf("Please! Choose from the list!!! (^v^!)"); break;  
        }
        getch();
    } while (c != 6);
}

int Information(staff st[], int *n)
{
    int i;
    char filename[50];
    printf("Enter the link or filename: "); fflush(stdin);
    fgets(filename,sizeof(filename), stdin); 
    Enter(filename);

    printf("\nEnter number of staff: ");
    scanf("%d", n);fflush(stdin);

    FILE *f;
    f = fopen(filename,"wb");
    if (f == NULL)
    {
        printf("\nCan't open file to write!!! (T^T)");
       return 0;
    }
    
    fwrite(n, sizeof(int), 1, f);
    for ( i = 1; i <= *n; i++)
    {
        printf("\nFILL DOWN THE INFORMATION\n");
        printf("ID: "); fflush(stdin);
        scanf("%d", &st[i].id);
        printf("FULL NAME: "); fflush(stdin);
        gets(st[i].name);
        printf("BIRTHDAY: "); fflush(stdin);
        scanf("%d %d %d",&st[i].bd.day,&st[i].bd.month,&st[i].bd.year);
        printf("SALARY: "); fflush(stdin);
        scanf("%lf", &st[i].salary);
        fwrite(&st[i], sizeof(staff), 1, f);
    }
    fclose(f);
}

int print(staff st[], int n)
{
	int i;
    char filename[50];
    printf("Enter the link or filename: "); fflush(stdin);
    fgets(filename,sizeof(filename), stdin); 
    Enter(filename);
    SET_COLOR(214);
	printf("\n---------------------------------------------------------------------------\n");
    SET_COLOR(3);
    printf("   %-20s %-20s %-20s %-20s","ID","NAME","BIRTHDAY","SALARY");
    SET_COLOR(214);
    printf("\n---------------------------------------------------------------------------\n");
    
    SET_COLOR(7);
    FILE *f;
    f = fopen(filename,"rb");
    if (f == NULL)
    {
        printf("\nCan't open file to write!!! (T^T)");
       return 0;
    }

    fread(&n, sizeof(int), 1, f);
    for ( i = 1; i <= n; i++)
    {
        fread(&st[i], sizeof(staff), 1, f);
        printf("\n%d. %-20d %-20s %02d/%02d/%-13d %.0lf",i,st[i].id, st[i].name,st[i].bd.day,st[i].bd.month,
		st[i].bd.year,st[i].salary);
    }
    fclose(f);
}

int Findstaff_ID(staff st[], int n)
{
    int i;
    int count = 0;
    printf("Enter ID staff: ");
    scanf("%d", &n);

    SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------\n");
    SET_COLOR(3);
    printf("%-20s %-20s %-20s %-20s","ID","NAME","BIRTHDAY","SALARY");
    SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------\n\n");
    SET_COLOR(7);
    for ( i = 1; i <= n; i++)
    {
        if (n == st[i].id)
        {
            printf("%-20d %-20s %02d/%02d/%-13d %.0lf\n",st[i].id, st[i].name,st[i].bd.day,st[i].bd.month,
		    st[i].bd.year,st[i].salary);
            count++;
            return 0;
        }
    }
    if (count == 0)
    {
        printf("Can't find the staff with ID %d",n);
        return 0;
    }
}

int Findstaff_year(staff st[], int n)
{
   int i;
    int count = 0;
    printf("Enter year of birth: ");
    scanf("%d", &n);
    SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------\n");
    SET_COLOR(3);
    printf("%-20s %-20s %-20s %-20s","ID","NAME","BIRTHDAY","SALARY");
    SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------\n\n");
    SET_COLOR(7);
    for ( i = 1; i <= n; i++)
    {
        if (n == st[i].bd.year)
        {
            printf("%-20d %-20s %02d/%02d/%-13d %.0lf\n",st[i].id, st[i].name,st[i].bd.day,st[i].bd.month,
		    st[i].bd.year,st[i].salary);
            count++;
            return 0;
        }
    }
    if (count == 0)
    {
        printf("Can't find the staff born in %d",n);
        return 0;
    } 
}

int Findstaff_salary(staff st[], int n)
{
   	int i;
   	double sal;
    int count = 0;
    
    printf("Enter salary of staff: ");
	scanf("%lf", &sal);
    SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------\n");
    SET_COLOR(3);
    printf("%-20s %-20s %-20s %-20s","ID","NAME","BIRTHDAY","SALARY");
    SET_COLOR(214);
	printf("\n-------------------------------------------------------------------------\n\n");
    SET_COLOR(7);
    for ( i = 1; i <= n; i++)
    {
        if (sal == st[i].salary)
        {
            printf("%-20d %-20s %02d/%02d/%-13d %.0lf\n",st[i].id, st[i].name,st[i].bd.day,st[i].bd.month,
		    st[i].bd.year,st[i].salary);
            count++; return 0;
        }
    }
    if (count == 0)
    {
        printf("Can't find the staff with salary %.0lf", sal);
        return 0;
    } 
}
