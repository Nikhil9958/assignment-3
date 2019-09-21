/* program to calculate whether angle A is 90 degree or not */
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the sides of a triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(pow(a,2)==pow(b,2)+pow(c,2))
		printf("angle A=90 degree");
	else if(pow(b,2)==pow(c,2)+pow(a,2))
			printf("angle B=90 degree");
			else if(pow(c,2)==pow(a,2)+pow(b,2))
					printf("angle C=90 degree"); 
				else
				printf("not a right angled triangle");
				}
			
