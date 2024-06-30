/*E3.1*/
#include<stdio.h>
#include<float.h>		//range and pricision of floating point is given in this header...these valuses can be compiler dependent
#include<limits.h> //for INT_MAX,INT_MIN, ranges for integers is mantioned in this header ...these are compiler dependent
#define MSSG "Hello World\n"
int main(void)
{
	printf(MSSG);
	
printf("--------------------------------------------------------------------------------\n");
	printf("Indian\b \n");  							
	printf("New\rDelhi\n");
printf("--------------------------------------------------------------------------------\n");
	int a=4000000000;
	unsigned int b=4000000000;
	printf("a=%d, b=%u\n",a,b);
	printf("%d, %u\n",INT_MAX,UINT_MAX);
	
	int a=625,b=2394,c=12345;
	printf("%5d,%5d,%5d\n",a,b,c);
	printf("%3d,%4d,%5d\n",a,b,c);
	
	int a;
	printf("Enter the int a=\n");
          scanf("%3d",&a);
          printf("%3d\n",a);
          printf("%03d\n",a);
          printf("%*3d\n",a);
          printf("%-7.5d\n",a); 
          printf("%7.5d\n",a);
printf("--------------------------------------------------------------------------------\n");
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	printf("%d\n",ch);
	
	int a=98;
	char ch='c';
	printf("%c,%d\n",a,ch);
printf("--------------------------------------------------------------------------------\n");
	float b=123.1265;
	printf("%f\t",b);
	printf("%.2f\t",b);
	printf("%.3f\n",b);
	printf("%7.2f\n",b);
	printf("%-7.2f\n",b);
	
	float a1,b1,a2,b2,a3,b3;
	a1=2;
	b1=6.8;
	a2=4.2;
	b2=3.57;
	a3=9.82;
	b3=85.673;
	printf("%3.1f,%4.2f\n",a1,b1);
	printf("%5.1f,%6.2f\n",a2,b2);
	printf("%7.1f,%8.2f\n",a3,b3);
	
	float x,y;
	printf("Enter the float x-y\n");
	scanf("%f-%f",&x,&y);
	//give input as 2.5-6.45
	printf("4.1=%4.1f  7.2 = %7.2f\n",x,y);
	printf("4.1=%4.1f  7.2 = %-7.2f\n",x,y);
printf("--------------------------------------------------------------------------------\n");
	//scanf("\n");
	//scanf("%[\n]%*c",str);       //to take an input from user allowing spaces too
	
	printf("%10s\n","India");
	printf("%4s\n","India");
	printf("%.2s\n","India");
	printf("%5.2s\n","India");
	
	char str[8];
	printf("Enter the string\n");
	scanf("%s",str);
	printf("print normally=%s\n",str);
	
	printf("print %%3s=%3s\n",str);
	printf("%10s\n","tea");

	printf("%.3s\n","Jayesh");

	printf("%3s\n","Jayesh");
	printf("%.7s\n","Ahirrao");
	printf("%.4444s\n","Ahirrao");
	printf("%10.2s\n","Aboli");		//10-2=8 leading blank spaces are there 
	printf("%8s\n","K");

printf("--------------------------------------------------------------------------------\n");

	int a=11;
	printf("a=%d\t",a);
	printf("a=%o\t",a);
	printf("a=%x\t",a);
	printf("a=%X\n",a);
	
printf("--------------------------------------------------------------------------------\n");
char dd,mm,yyyy;
printf("input must be given in a format  dd-mm-yyyy or dd/mm/yy or dd mm yyyy   ");
scanf("%c %*c %c %*c %c",&dd,&mm,&yyyy);
printf("%d%d%d",dd,mm,yyyy);

printf("--------------------------------------------------------------------------------\n");	
	
	//for int type
	/*
        
//for float type 

//formatr for string 
	*/
	char str[8];
	printf("Enter the string\n");
	scanf("%s",str);
	printf("print normally=%s\n",str);
	printf("print %%3s=%3s\n",str);
	printf("%10s\n","tea");
	printf("%.3s\n","Jayesh");
	printf("%3s\n","Jayesh");
	printf("%.7s\n","Ahirrao");
	printf("%.4444s\n","Ahirrao");
	printf("%8s\n","Aboli");
	printf("%8s\n","K");
printf("--------------------------------------------------------------------------------\n");	
	printf("sizeof(char) = %u\n",sizeof(char));
	printf("sizeof(short) = %u\n",sizeof(short));
	printf("sizeof(int) = %u\n",sizeof(int));
	printf("sizeof(long) = %u\n",sizeof(long));
	printf("sizeof(float) = %u\n",sizeof(float));
	printf("sizeof(double) = %u\n",sizeof(double));
	printf("sizeof(long double) = %u\n",sizeof(long double));

	printf("SCHAR_MIN = %d\n",SCHAR_MIN);
	printf("SCHAR_MAX = %d\n",SCHAR_MAX);
	printf("UCHAR_MAX = %d\n",UCHAR_MAX);
	
	printf("SHRT_MIN = %d\n",SHRT_MIN);
	printf("SHRT_MAX = %d\n",SHRT_MAX);
	printf("USHRT_MAX = %u\n",USHRT_MAX);
		
	printf("INT_MIN = %d\n",INT_MIN);
	printf("INT_MAX = %d\n",INT_MAX);
	printf("UINT_MAX = %u\n",UINT_MAX);
	
	printf("LONG_MIN = %ld\n",LONG_MIN);
    printf("LONG_MAX = %ld\n",LONG_MAX);
    printf("ULONG_MAX = %lu\n",ULONG_MAX);
    
	printf("FLT_MIN = %e\n",FLT_MIN);
	printf("FLT_MAX = %e\n",FLT_MAX);

	printf("DBL_MIN = %e\n",DBL_MIN);
	printf("DBL_MAX = %e\n",DBL_MAX);

	printf("LDBL_MIN = %e\n",LDBL_MIN);
	printf("LDBL_MAX = %e\n",LDBL_MAX);

	/*Number of digits of precision*/
	printf("FLT_DIG = %d\n",FLT_DIG);
	printf("DBL_DIG = %d\n",DBL_DIG);
	printf("LDBL_DIG = %d\n",LDBL_DIG);
printf("--------------------------------------------------------------------------------\n");	
	
	return 0;

	
}
