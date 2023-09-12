#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter no of days ");
	scanf("%f",&a);
	printf("enter which type of year it is ");
	scanf("%f",&b);
	if(b==1)
	{
		c=a/365;
		printf("no of years is %f",c);
		
	}
	else
	{
		c=a/366;
		printf("no of years is %f",c);
		
	}
	return 0;
	
}

