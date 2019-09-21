/* program to print the biggest of the four number */
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d )
		printf("a is largest and equal to:%d",a);
	else if(b>a && b>c && b>d)
		printf("b is the largest number and is equal to:%d",b);
	else if(c>a && c>b && c>d)
                printf("c is the largest number and the value of c=%d",c);
        else
		printf("d is the largest number and is equal to:%d",d);
}
