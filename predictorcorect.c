#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x, float y);
int main ()
{
	float x0,y0;
	printf("Enter the initial value of x\n");
	scanf("%f",&x0);
	printf("Enter the intial value of y\n");
	scanf("%f",&y0);
	float h;
	printf("enter the step size \n");
	scanf("%f",&h);
	float xn;
	printf("enter the value of x for which you want to find the y\n");
	scanf("%f",&xn);
	float x1;
	x1=x0+h;
	float y1;
	y1=y0+h*f(x0,y0);
	float k1,k2,k3,k4,k;
	int i=1;
	float y2_c;
	float y2_p;
	float x2;
	printf("NO . OF ITERATION\tX0\t\tY0\n");
	printf("...................................................\n");
	// while loop karo toh loop ma aise dikhana 
	// aur agar for use karo toh ek step kam 
	do
	{
		y2_p=y0+2*h*f(x1,y1);
		x2=x1+h;
		y2_c=y1+h/2*(f(x1,y1)+f(x2,y2_p));
		printf("\t%d\t\t%f\t%f\n",i,x0,y0);
		x0=x1;
		x1=x2;
		y0=y1;
		y1=y2_c;
		i++;	
	} while(x0<=xn);
//	printf("The value of the %f is %f ",xn,y0);
}
float f(float x, float y)
{
	return x+y;
}
