/* program to find whether a line and a circle intersect or not */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float p,q,r,a,b,c,D;
	float l,area;
	printf("enter the numbers a,b,c,d,e,f");
	scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
	D=(abs(((a*p)+(b*q)+c)/(sqrt(pow(a,2)+pow(b,2)))));
	if(D>r)
		printf("the line and circle will not intersect");
	else if(D==r)
		printf("the line is a tangent to the given circle");
	else
	{
		l=sqrt((r*r)-(D*D));
	        area=l*D;
	printf("area of triangle formed by the points of intersection and centre is%f",area);
	}

}


