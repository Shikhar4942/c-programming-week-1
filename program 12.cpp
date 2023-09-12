#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f;
	printf("enter principle value ");
	scanf("%f",&a);
	printf("enter interest rate");
	scanf("%f",&b);
	printf("enter time in years");
	scanf("%f",&c);
	d=pow(((b/100)+1),c);
	e=a*d;
	printf("compound interest is %f",e);
	f=e+a;
	printf("total amount is %f",f);
	return 0;
}

