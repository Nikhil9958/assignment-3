/* program to print the biggest number first */
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d\t%d",a,b);
	else
		printf("%d\t%d",b,a);
}
