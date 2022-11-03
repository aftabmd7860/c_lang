#include<stdio.h>
int var =1;
int*ptr;
int main(void)
{
ptr=&var;
	printf("\n direct access ,var = %d",var);
        printf("\n direct access ,var = %d",*ptr);
	printf("\n adress of var = %d",&var);
        *ptr=48;
        printf("\n indirect access ,var = %d",*ptr);
        return 0;
}
