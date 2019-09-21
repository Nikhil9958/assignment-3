/* program to find the middle value */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	if ((c>b&&b>a)||(a>b&&b>c))
		printf("b is the middle number with value:%d",b);
	else if ((b>c&&c>a)||(a>c&&c>b))
	        printf("c is the middle number with value:%d",c);
	else 
		printf("a is the middle number with value:%d",a);
}


