#include<stdio.h>
/*simple interest*/
int main()
{
	float a,b,c,d;
	printf("enter interest percentage");
	scanf("%f",&a);
	
	printf("enter principle value");
	scanf("%f",&b);
	
	c=(b*a)/100;
	d=c+b;
	printf("simple interest of amount is %f ",c);
	printf("totalamount %f",d);
	
	
	
}

