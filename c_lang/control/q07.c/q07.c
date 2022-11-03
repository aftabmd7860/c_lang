#include<stdio.h>
void main()
{
int n,r,sum=0,temp;
printf("entre a number:\t");
scanf("%d",&n);
	for (temp=n;n!=0;n=n/10)
	{
		r=n%10;
		sum =sum+(r*r*r);
	}
if (sum ==temp)
	printf("%d is an armstrong no.\n",temp);
else
	 printf("%d is not an armstrong no.\n",temp);

}

