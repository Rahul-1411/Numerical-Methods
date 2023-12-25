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
	float k1,k2,k3,k4,k;
	int i=1;
	printf("NO . OF ITERATION\tX0\t\tY0\n");
	printf("...................................................\n");
	// while loop karo toh loop ma aise dikhana 
	// aur agar for use karo toh ek step kam 
	do
	{
		printf("\t%d\t\t%f\t%f\n",i,x0,y0);
		k1=h*f(x0,y0);
		k2=h*f(x0+(h/2),y0+(k1/2));
		k3=h*f(x0+(h/2),y0+(k2/2));
		k4=h*f(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		y0=y0+k;
		x0=x0+h;
		i++;	
	} while(x0<=xn);
//	printf("The value of the %f is %f ",xn,y0);
}
float f(float x, float y)
{
	return x+y;
}
