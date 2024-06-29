#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

const double PI = 3.14;

void printhello();
void printstar();
int tht();
void sumsofquare();
void reversenumber();
void sumsecond();
void circle();
void acreagesquare();
void perimetercircle();
void isoscelestrapezoid();
void checkevenodd();
void checkdivisible369();
void firstdegreeequation();
void seconddegreeequation();
void electricitybill();
void kmtaxi();
void minandmax();
void printdayinweek();
void printmonthinyear();
//void print_size_symbol();
void Switch_case_symbol();
void checkrighttriangle();
void rank_school();
void exportodd();
void exportsumodd();
void finduocso();
void perfectnumber();
void multiplicationtable();
void square();
void factorial();
void printletter();
void primenumber();
int printprimenumbers(int n);
void sumbiger0();
void dtb();
void print10ilu();
char printanyword();
void sumcountoddeven();
void zcountinuefactory();
void entersymboltoclculation();

int sumcountinue();
int sumcountinueodd(int n);
int sumevencounntinue(int n);
long factorial1(int n);
int fabonaci(int n);

int main()
{
    int ch;
    printf("\t\t\t========================= MENU =========================\n\n");      	//Lập menu cho chuong trình
	printf("1. Print hello!\t\t\t\t\t");
	printf("2. Print triangle strars\t\t\t");
	printf("3. Calculator sum, diffirencee, product\n\n");	
	printf("4. Calculator square of sum\t\t\t");
	printf("5. Reverse number\t\t\t\t");
	printf("6. Calculator sum of second\n\n");
    printf("7. Calculator acreage circle\t\t\t");
    printf("8. Calculator acreages quare\t\t\t");
    printf("9. Calculator perimeter circle\n\n");
    printf("10. Calculator perimeter isosceles trapezoid\t");
    printf("11. Check even and odd can divisible by 3\t");
    printf("12. Check number can divisible by 3,6,9\n\n");
    printf("13. first degree equation\t\t\t");
    printf("14. second degree equation\t\t\t");
    printf("15. Calculator electricity bill\n\n");
    printf("16. Calculator KM taxi\t\t\t\t");
    printf("17. Find min and max\t\t\t\t");
    printf("18. Print day in week\n\n");
    printf("19. print size symbol\t\t\t\t");
    printf("20. Print month in year\t\t\t\t");
    printf("21. Switch case symbol\n\n");
    printf("22. Check right triangle\t\t\t");
    printf("23. Check rank in school\t\t\t");
    printf("24. Export odd\n\n");
    printf("25. Export odd sum\t\t\t\t");
    printf("26. Find divisor\t\t\t\t");
    printf("27. Find divisor\n\n");
    printf("28. Multiplication table\t\t\t");
    printf("29. Square\t\t\t\t\t");
    printf("30. Factorial\n\n");
    printf("31. Print letter\t\t\t\t");
    printf("32. check prime number\t\t\t\t");
    printf("33. Print prime numbers\n\n");
    printf("34. calculatir the sum biger zero\t\t");
    printf("35. calculatir average of subject\t\t");
    printf("36. print 10 row iloveyou\n\n");
    printf("37. print 10 row any word\t\t\t");
    printf("38. caltulator sum, sum odd, sum even\t\t");
    printf("39. caltulator z= (1+2+...+n)/(1*2*...*n)\n\n");
    printf("40. Calculator +,-,*,/\t\t\t\t");
    printf("44. calculator sum counntinue\n");
    printf("45. calculator sum  odd counntinue\n");
    printf("46. calculator sum  even counntinue\n");
    printf("47. calculator factorial\n");

	printf("\n\t\t\t  ======================= END =======================");

    do
    {
        printf("\n\nChoose programming: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: printhello();  break;
        
        case 2: printstar(); break;

        case 3: tht(); break;

        case 4: sumsofquare(); break;
        
        case 5: reversenumber(); break;

        case 6: sumsecond(); break;

        case 7: circle(); break;

        case 8: acreagesquare(); break;

        case 9: perimetercircle(); break;

        case 10: isoscelestrapezoid(); break;

        case 11: checkevenodd(); break;

        case 12: checkdivisible369(); break; 

        case 13: firstdegreeequation(); break;

        case 14: seconddegreeequation(); break;

        case 15: electricitybill(); break;

        case 16: kmtaxi(); break;

        case 17: minandmax(); break;

        case 18: printdayinweek(); break;

        case 19: printmonthinyear(); break;

//        case 20: print_size_symbol(); break;

        case 21: Switch_case_symbol(); break;

        case 22: checkrighttriangle(); break;

        case 23: rank_school(); break;

        case 24: exportodd(); break;

        case 25: exportsumodd(); break;

        case 26: finduocso(); break;

        case 27: perfectnumber(); break;

        case 28: multiplicationtable(); break;

        case 29: square(); break;

        case 30: factorial(); break;

        case 31: printletter(); break;

        case 32: primenumber(); break;

        case 33:
            {       
                int n,i = 2;
                int count = 0;

                printf("\nEnter number: ");
                scanf("%d",&n);
                
                while (count < n)
                {
                    if (printprimenumbers(i))
                    {
                        printf("\n%d\t", i);
                        count++;
                    }
                   i++;
                }
            } break;

        case 34: sumbiger0(); break;

        case 35: dtb(); break;

        case 36: print10ilu(); break;

        case 37: printanyword(); break;

        case 38: sumcountoddeven(); break;

        case 39: zcountinuefactory(); break;

        case 40: entersymboltoclculation(); break;

        case 44: 
            {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);

                printf("The result is %d", n + sumcountinue(n-1));
            }break;

        case 45: 
            {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);

                printf("The result is %d",sumcountinueodd(n));
                
            }break;

            case 46: 
            {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);

                printf("The result is %d",sumevencounntinue(n));
            }break;

            case 47:
            {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);

                printf("The result is %d",factorial1(n));
            }break;

            case 48: 
            {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);

                printf("The result is %d",fabonaci(n));
            }

        default: printf("Don't have this programming. Please! Choose agian."); return 0;
        }
        getch();
    } while (ch != 27);
    
}

void printhello()
{
    printf("\nHello!");
    printf("Welcome to Nhap Mon Lap Trinh.");
}

void printstar()
{
    printf("\n    * \n");
    printf("   * * \n");
    printf("  * * * \n");
    printf(" * * * * ");
}

int tht()
{
    int a,b;
    int s = 0, t = 0,h = 0;
    printf("\nEnter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);

    s = a + b;
    h = a - b;
    t = a * b;

    printf("\nThe sum is       : %d\n", s);
    printf("The difference is: %d\n", h);
    printf("Theproduct is    : %d", t);
}

void sumsofquare()
{
    int a, b;
    int s = 0;
    printf("\nEnter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);

    s = pow(a,2) + a*b + pow(b,2);
    printf("\nthe result is %d",s);
}

void reversenumber()
{
    int n;
    int s = 0;
    printf("\nEnter value: ");
    scanf("%d",&n);

    s = ((n%10)*10+(n/10));
    printf("\nthe result is %d",s);
}

void sumsecond()
{
    int h,m,s;
    int sum = 0;
    printf("\nEnter hour: ");
    scanf("%d",&h);
    printf("Enter minutes: ");
    scanf("%d",&m);
    printf("Enter second: ");
    scanf("%d",&s);

    sum = h*3600 + m*60 + s;
    printf("\nSum of second is %d",sum);
}

void circle()
{
    float r;
    float s= 0;
    printf("\nEnter radius:");
    scanf("%f",&r);

    s = pow(r,2) * PI;
    printf("\nthe acreage of circle is %.2f",s);
}

void acreagesquare()
{
    float a;
    float s = 0;
    printf("\nEnter the lenth of square:");
    scanf("%f",&a);

    s = pow(a,2);
    printf("\nThe sum acreage of squar is %.2f",s);
}

void perimetercircle()
{
    float r;
    float c= 0;
    printf("\nEnter the lenth of circle: ");
    scanf("%f",&r);

    c = pow(r,2)*PI;
    printf("\nPerimeter circle is %.2f",c);
}

void isoscelestrapezoid()
{
    float a,b,h;
    float P = 0;
    printf("\nEnter the lenth small bottom: ");
    scanf("%f",&a);
    printf("Enter the lenth big bottom: ");
    scanf("%f",&b);
    printf("Enter the lenth of heigh: ");
    scanf("%f",&h);

    P = a + b + (h * 2);
    printf("\nperimeter isosceles trapezoid is %.2f",P);
}

void checkevenodd()
{
    int n;
    printf("\nEnter number: ");
    scanf("%d",&n);

    if (n%2 == 0)
    {
        if (n%3 == 0)
            printf("%d is even can divisible by 3",n);
        
        else
            printf("%d is even can't divisible by 3",n);
        
    }
    else
    {
        if (n%3 == 0)
            printf("%d is odd can divisible by 3",n);
        
        else    
            printf("%d is odd can't divisible by 3",n);
    }
}

void checkdivisible369()
{
    int n;
    printf("\nEnter number: ");
    scanf("%d",&n);

    if (n % 3 == 0 && n%6 == 0 && n%9 == 0)
    {
        printf("%d can divisible by 3 6 9.");
    }
    else
        printf("%d can't divisible by 3 6 9.");
}

void firstdegreeequation()
{
    int a,b;
    float x= 0;
    printf("\nEnter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);

    if (a == 0)
    {
        if (b == 0)
            printf("Phuong trinh vo so nghiem");
        
        else
            printf("Phuong trinh vo nghiem");
    }
    else
    {
            x = -b/a;
            printf("Phuong tirnh co nghiem x = %.1f", x);    
    }    
}

void seconddegreeequation()
{
    int x,a,b,c;
    printf("\nEnter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);
    printf("Enter value c: ");
    scanf("%d",&c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Phuong trinh vo so nghiem");
            
            else    
                printf("Phuong trinh vo nghiem");
        }
        else    
            printf("Phuong trung co nghiem duy nhat: X = %.1f", -c/b);
    }
    else
    {
        int delta = 0;
        delta = b*b - 4*a*c;

        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
            printf("Phuong trinh co nghiem kep x1 = x2 = %.1f", -b/(2*a));
        }
        else
        {
            float x1 = (-b+sqrt(delta))/(2*a);
            float x2 = (-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet\nx1 = %.1f\nx2 = %.1f",x1,x2);
        }    
    }
}

void electricitybill()
{
    int n;
    int p1 = 1000;
    printf("\nEnter KWh: ");
    scanf("%d",&n);

    if (n >= 1 && n <= 100)
        printf("electricity bill is %dVND", p1);

    else if (n > 100 && n <= 150)
        printf("electricity bill is %dVND", p1+200);
    
    else if(n > 150 && n <= 200)
        printf("electricity bill is %dVND", p1+600);

    else
        printf("electricity bill is %dVND", p1+1000);
}

void kmtaxi()
{
    float km;
    float cost = 0;
    printf("\nEnter KM: ");
    scanf("%f",&km);

    if (km <= 1)
    {
        cost = 16;
        printf("The bill is %.3fVND",cost); 
    }

    else if (km > 1 && km < 31)
    {
        cost = ((km - 1.0)/0.2)*2 + 16;
        printf("The bill is %.3fVND",cost); 
    }
    else
    {
        cost = 1*16 +((km - 1.0)/0.2)*2 + (29/0.2)*14;
        printf("The bill is %.3fVND",cost); 
    }  
}

void minandmax()
{
    int a,b,c,d;
    printf("\nEnter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("Enter number c: ");
    scanf("%d",&c);
    printf("Enter number d: ");
    scanf("%d",&d);

    int min; 
    int max;
    if (a > b && a > c && a > d)
        max = a;
    
    else if (b > a && b > c && b > d)
        max = b;
    
    else if (c > a && c > b && c > d)
        max = c;

    else 
        max = d;

    if(a < b && a < c && a < d)
        min = a;
    
    else if(b < a && b < c && b < d)
        min = b;

    else if(c < a && c < b && c < d)
        min = c;

    else
        min = d;

    printf("\nMin = %d",min);
    printf("\nMax = %d",max);
}

void printdayinweek()
{
    int n;
    printf("\nEnter number for 1 -> 7 to know day in week.");
    printf("\nEnter number: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1: printf("Monday"); break; 

    case 2: printf("Tuesday"); break; 

    case 3: printf("wednesday"); break;
    
    case 4: printf("Thursday"); break;

    case 5: printf("Friday"); break;

    case 6: printf("Saturday"); break;

    case 7: printf("Sunday"); break;

    default: printf("\nThis is not a day in week"); break; 
    }
}

void printmonthinyear()
{
    int n;
    printf("\nEnter number for 1 -> 12 to know month in year.");
    printf("\nEnter number: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1: printf("January"); break; 

    case 2: printf("February"); break; 

    case 3: printf("March"); break;
    
    case 4: printf("April"); break;

    case 5: printf("May"); break;

    case 6: printf("June"); break;

    case 7: printf("July"); break;

    case 8: printf("August"); break;

    case 9: printf("September"); break;

    case 10: printf("October"); break;

    case 11: printf("Novemver"); break;

    case 12: printf("December"); break;

    default: printf("\nThis is not a month in year."); break; 
    } 
}

// void print_size_symbol()
// {
//       char c;
//     printf("\nEnter number size S,M,L,XL,XXL,XXXL");
//     printf("\nEnter size: "); fflush(stdin);
//     c = getchar();

//     switch (c)
//     {
//     case 83: printf("Size S");  break;
//     case 115: printf("Size S");  break;
        
//     case 109: printf("Size M");  break;
//     case 77: printf("Size M");  break;

//     case 108: printf("Size L");  break;
//     case 76: printf("Size L");  break;

//     case '120'&&'108': printf("Size XL");  break;
//     case '088'&&'076': printf("Size XL");  break;

//     case 'xxl': printf("Size XXL");  break;
//     case 'XXL': printf("Size XXL");  break;

//     case 'xxxl': printf("Size XXXL");  break;
//     case 'XXXL': printf("Size XXXL");  break;

//     default: printf("We don't have this size!"); break;   
//     }
// }

void Switch_case_symbol()
{
    int c;
    int a,b;
    int s = 0;
    printf("Enter (+,-,*,/) to calculator: ");fflush(stdin);
    c = getchar();

    switch (c)
    {
    case '+':

                printf("Enter value a: ");
                scanf("%d",&a);
                printf("Enter value b: ");
                scanf("%d",&b);

                s = a + b;
                printf("the result is %d",s); break;

    case '-': 
    
                printf("Enter value a: ");
                scanf("%d",&a);
                printf("Enter value b: ");
                scanf("%d",&b);

                s = a - b;
                printf("the result is %d",s); break;
        
    case '*': 
        
                printf("Enter value a: ");
                scanf("%d",&a);
                printf("Enter value b: ");
                scanf("%d",&b);

                s = a * b;
                printf("the result is %d",s); break;
    
    case '/': 
            
                printf("Enter value a: ");
                scanf("%d",&a);
                printf("Enter value b: ");
                scanf("%d",&b);

                s = a * b;
                printf("the result is %d",s); break;

    default: printf("Don't have this calculation");break; 
    }
}

void checkrighttriangle()
{
    int a,b,c;
    printf("\nEnter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);
    printf("Enter value c: ");
    scanf("%d",&c);

    if (a < b + c || b < a + c || c < a + b)
    {
        if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            printf("This is right triangle");
        }
        else    
            printf("This is not right triangle");
    }
}

void rank_school()
{
    float math,phisics,chemistry;
    float dtb = 0;

    printf("\nEnter value math: ");
    scanf("%f",&math);
    printf("Enter value phisics: ");
    scanf("%f",&phisics);
    printf("Enter value chemistry: ");
    scanf("%f",&chemistry);

    if (math < 0 || math > 10 || phisics < 0 || phisics > 10 || chemistry < 0 || chemistry > 10)
    {
        printf("Enter wrong score. Pls! enter agian.");
    }
    else
    {
        dtb = (math + phisics + chemistry)/3;
        printf("\nAverage score is %.1f\n",dtb);

        if (dtb >= 0 && dtb < 5)
            printf("Rank: Weak");
    
        else if(dtb >= 5 && dtb < 7)
            printf("Rank: Average");

        else if(dtb >= 7 && dtb < 8)
            printf("Rank: Good");

        else if(dtb >= 8 && dtb < 9)
            printf("Rank: Very good");

        else
            printf("Rank: Excellent");
    }
}

void exportodd()
{
    int n,i;
    int count = 0;
    printf("\nEnter number: ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\t",i);
            count++;
        }
        if (count == 5)
        {
            printf("\n\n");
        }
    }
}

void exportsumodd()
{
    int n,i;
    int sum = 0;
    printf("\nEnter number: ");
    scanf("%d",&n);

    for (i = 0; i <= n; i++)
    {
        if (i%2 != 0)
        {
            sum += i;
        }
    }
    printf("The odd sum is %d",sum);
}

void finduocso()
{
    int n,i;
    printf("\nEnter number: ");
    scanf("%d",&n);

    printf("Uoc so cua %d la: ",n);
    for ( i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            printf("%d\t",i);
        } 
    }
}

void perfectnumber()
{
    int n,i;
    int s=0;
    printf("\nEnter number: ");
    scanf("%d",&n);

    for ( i = 1; i <= n/2; i++)
    {
        
        if (n%i == 0)
            s += i;
        
    }
    if (s == n)
        printf("This is perfect number");
    
    else    
        printf("This isn't perfect number");
}

void multiplicationtable()
{
     int n,i;
     int result = 0;
     printf("\nEnter multiplication table: ");
     scanf("%d",&n);

    for ( i = 1; i <= 10; i++)
    {
        result = i * n;
        printf("\n%d * %d = %d",n,i,result);
    }
}

void square()
{
    int n,m;
    int result = 0;
    printf("\nEnter value m: ");
    scanf("%d",&m);
    printf("Enter value n: ");
    scanf("%d",&n);

    result = pow(m,n);
    printf("The result is %d",result);
}

void factorial()
{
    int n,i;
    int s = 1;
    printf("\nEnter value: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        s *= i;
    }
    printf("The factorial of %d! is %d",n,s);
}

void printletter()
{
    char i;
    for ( i = 65; i <= 90 ; i++)
    {
        printf("%c\t", i);
    }
    printf("\n\n");
    for ( i = 90; i >= 65 ; i--)
    {
        printf("%c\t", i);
    }
    printf("\n\n");
    for ( i = 97; i <= 122 ; i++)
    {
        printf("%c\t", i);
    }
    printf("\n\n");
    for ( i = 122; i >= 97 ; i--)
    {
        printf("%c\t", i);
    }
}

void primenumber()
{
    int n,i;
    printf("Enter number: ");
    scanf("%d",&n);

    if (n < 2)
        printf("%d is not prime number.");
    
    int count = 0;
    for ( i = 2; i < sqrt(n); i++)
    {
        if (n%i == 0)
            count++;
    }
    if (count == 0)
        printf("%d is prime number",n);
    
    else
        printf("%d is not prime number.",n);
}

int printprimenumbers(int n)
{
    int i;
    

    for ( i = 2; i < sqrt(n); i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}

void sumbiger0()
{
    int n,i;
    int s = 0;
    do
    {
        printf("Enter number");
        scanf("%d",&n);

        if (n > 0)
            s += n;

    }while(n > 0);
    
    printf("The result is %d",s);
}
                                                                            //Đệ Qui
int sumcountinue(int n)
{
    if (n <= 1)
        return n;
    
    else
        return n + sumcountinue(n - 1); 
}

int sumcountinueodd(int n)
{
    if (n <= 1)
        return n;
    
    if(n%2 != 0) 
        return n + sumcountinueodd(n - 1);
    
    else
        return sumcountinueodd(n - 1);
}

int sumevencounntinue(int n)
{
    if(n == 0)
        return 0;

    else if(n%2 == 0)
        return  n + sumevencounntinue(n -1);
    
    else    
        return sumevencounntinue(n - 1);
}

long factorial1(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial1(n -1);
}

int fabonaci(int n)
{
    if (n == 1 && n == 2)
        return 1;
    
    else
        return fabonaci(n - 1) + fabonaci(n - 2);
}

void dtb()
{
    float t,l,h;
    float dtbc = 0;
    do
    {
        printf("\nEnter Math[0-10]: ");
        scanf("%f",&t);
        printf("Enter Phisics[0-10]: ");
        scanf("%f",&l);
        printf("Enter Chemistry[0-10]: ");
        scanf("%f",&h);
    }while(t < 0 || t > 10 && l < 0 || l > 10 && h < 0 || h > 10);

    dtbc = (t +l + h)/3;
    printf("Average is %.1f",dtbc);
}

void print10ilu()
{
    int n,i;
    for ( i = 0; i < 10; i++)
    {
        printf("\nI Love You");
    } 
}

char printanyword()
{
    char word[50];
    fflush(stdin);
    printf("\nEnter word: ");
    gets(word);
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%s\n",word);
    }
}

void sumcountoddeven()
{
    int n,i;
    int sum = 0;
    int sumodd = 0 ;
    int sumeven = 0;
    printf("\nEnter number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        sum += i;

        if (i%2 == 0)
            sumeven += i;

        else
            sumodd += i;
    }
    
    printf("Sum is %d",sum);
    printf("\nSum even is %d",sumeven);
    printf("\nSum odd is %d",sumodd);
}

void zcountinuefactory()
{
    int n,i;
    int sum = 0;
    int fact = 1;
    float z = 0;
    printf("\nEnter value n: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        sum += i;
        fact *= i;
    }
    
    z = sum*1.0/fact;
    printf("The result is %.1f",z);
}

void entersymboltoclculation()
{
    float a,b;
    char ch;
    printf("Enter calculation[+,-,*,/]: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case '+': 
        {
            float sum = 0;
            printf("Enter value a: ");
            scanf("%f",&a);
            printf("Enter value b: ");
            scanf("%f",&b);

            sum = a + b;
            printf("%.1f + %.1f = %.1f",a,b,sum);
        }break;
        
    case '-':
        {
            float Subtrac = 0;
            printf("Enter value a: ");
            scanf("%f",&a);
            printf("Enter value b: ");
            scanf("%f",&b);

            Subtrac = a - b;
            printf("%.1f - %.1f = %.1f",a,b,Subtrac);
        }break;

    case '*':
        {
            float Multi = 0;
            printf("Enter value a: ");
            scanf("%f",&a);
            printf("Enter value b: ");
            scanf("%f",&b);

            Multi = a * b;
            printf("%.1f * %.1f = %.1f",a,b,Multi);
        }break;
    
    case '/':
        {
            float Division = 0;
            printf("Enter value a: ");
            scanf("%f",&a);
            printf("Enter value b: ");
            scanf("%f",&b);

            Division = a / b;
            printf("%.1f * %.1f = %.1f",a,b,Division);
        }break;

    case '%': 
        {
            int c,d;
            int chiadu = 0;
            printf("Enter value a: ");
            scanf("%f",&a);
            printf("Enter value b: ");
            scanf("%f",&b);

            chiadu = c % d;
            printf("%d * %d = %d",c,d,chiadu);
        }break;
    
    default: printf("Don't have this calculation"); break; 
    }
}
