#include<stdio.h>
int main()
{
     int i,j,c[2][2],a[2][2],b[2][2];
 	 printf("enter two matrices\n");
 	 scanf("%d %d",&a[i][j],&b[i][j]);

for (i=0;i<=2;i++)
	printf("first row\n");
	scanf("%d",&a[i][j]);
	   for (j=0;j<=2;j++)
		 printf("column\n");
		 scanf("%d",&a[i][j]);

	c[i][j]=a[i][j]+b[i][j];
	printf("sum of two matrices is %d",c[i][j]);
	return 0;
}
