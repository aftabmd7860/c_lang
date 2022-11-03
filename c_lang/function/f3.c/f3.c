#include<stdio.h>
void swap(int*,int*);
void main()
{	int num1,num2;
	printf("enter the first number");
		scanf("%d",&num1);
	printf("enter the second number");
                scanf("%d",&num1);
		swap(&num1,&num2);
		printf("%d\n",num1);
		   printf("%d\n",num2);


		}
void swap(int *n1, int *n2)
{
int temp;
temp=*n1;
*n2=*n2;
*n1=temp;



}
