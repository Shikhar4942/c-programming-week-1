#include<stdio.h>
/*1=metre 2=centimetre rest for millimetre*/
int main()
{
	float m,km,cm,mm,d;
	printf("enter distance in km=");
	scanf("%f",&km);
	m=1000*km;
	cm=100000*km;
	mm=1000000*km;
	printf("enter unit in which you want ans");
	scanf("%f",&d);
	if(d==1)
	{
		printf("%f",m);
		
	}
	else if(d==2)
	{
		printf("%f",cm);
		
	}
	else
	{
		printf("%f",mm);
		
	}
	return 0;
	
}


