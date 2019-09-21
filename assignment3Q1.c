/* program to print the biggest of the three number */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c )
		printf("a is largest and equal to:%d",a);
	else if(b>a && b>c)
		printf("b is the largest number and is equal to:%d",b);
	else
		printf("c is the largest number and is equal to:%d",c);
}
