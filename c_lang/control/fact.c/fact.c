#include<stdio.h>
int main()
{
int i,fact=1,n;
	printf("enter the number n::\n");
	scanf("%d",&n);

		for (i=1;i<=n;i++)
		fact=fact*i;			
		printf("fact of %d is  %d::\n",n,fact);
		return 0;

}


