#include<stdio.h>
int rotate_right(int n,int b);
int main()
{
	int n,b;
	printf("enter the number to rotate::\t");
	scanf("%d",&n);
	printf("enter the position::\t");
        scanf("%d",&b);
	printf("the value %d ,aftre the right rotate by %d position %d::\t",n,b,rotate_right(n,b));

}
int rotate_right(int n,int b)
{
return (n>>b|n<<b);
}
