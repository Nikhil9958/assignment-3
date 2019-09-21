/* program to print the slope of a line and whether the line is vertical or not */
#include<stdio.h>
int main()
{
	int a,b,c;
	float m;
	printf("enter the values a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(b==0)
	printf("line is vertical with undefined slope");
	else
	{
		m=(-b)/a;
	printf("line is not vertical\nslope=%f",m);
}
}
