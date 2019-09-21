/* program to print the roots on the basis of the given conditions */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()

{
	float a,b,c;
	float x,y,D,i,k,r;
	printf("enter the inputs a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	D=(pow(b,2)-(4*(a*c)));
        r=(-b)/(2*a);
	i=(sqrt(abs(D)))/(2*a);
	k=(-sqrt(abs(D)))/(2*a);
	x=(-b+sqrt(D))/(2*a);
	y=(-b-sqrt(D))/(2*a);
	if (D>0)
		printf("roots are:%f %f",x,y);
	else if (D=0)
		printf("both roots are:%f %f",x,y);
	else
	{
		printf("first root is%f+%fi",r,i);
		printf("second root is%f%fi",r,k);
				}}


