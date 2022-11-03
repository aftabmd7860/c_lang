// simple interest of data 
// daclare  data in float type to get an value with decimal
#include<stdio.h>
int main ()
{
float simple_interest,p,t,r;
	printf("enter PRINCIPLE___:\t");
	scanf("%f",&p);
	printf("enter TIME___:\t");
	scanf("%f",&t);
	printf("enter RATE___:\t");
	scanf("%f",&r);
	simple_interest = p*t*r/100;
	printf("simple interest = %f\n",(simple_interest));
return 0;
}
