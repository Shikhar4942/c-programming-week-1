#include<stdio.h>
int main()
{
	float a,b;
	printf("enter 2 no");
	scanf("%f %f",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("%f %f",a,b);
	return 0;
	
	
}

