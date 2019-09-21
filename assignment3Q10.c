/* program to find out how many numbers among the given are equal to x */
#include<stdio.h>
int main()
{
	int a,b,c,d,x,i=0;
	printf("enter the numbers a,b,c,d,x");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	if(x==a)
		i++;
	if(x==b)
		i++;
	if(x==c)
		i++;
	if(x==d)
		i++;
	printf("output:%d",i);
}

	
