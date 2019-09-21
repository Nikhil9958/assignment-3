/* program to find the distinct number of the three entered numbers */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three inputs");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b)
		printf("c isn the distinct number and equals to:%d",c);
	else if(a==c)
		printf("b is the distinct number and is equal to%d",b);
	else 
		printf("a is the distinct number and is equal to:%d",a);}
