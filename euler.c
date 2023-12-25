#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x, float y);// function prototype
int main ()
{
	float x0,y0;
	int k=1;
	printf("enter the starting values of x \n");
	scanf("%f",&x0);
	printf("enter the starting values of y \n");
	scanf("%f",&y0);
	float xn;
	float y1;
	printf("enter the value of x for which you want to find the yn\n");
	scanf("%f",&xn);
	float h;
	printf("enter the step size \n");
	scanf("%f",&h);
	printf("NO . OF ITERATION\tX0\t\tY0\n");
	int  i;
	// while se karne se error dega ek step show nahi karega
	//for(i=0;i<xn/h;i++)
   //for(i=x0+h;i<=xn;i+=h)
   // xn/h-> 0.1/0.02=5
   // while karo toh loop ma aise dikhana 
   i=0;
   do
	{
	printf("\t%d\t\t%f\t%f\n",k,x0,y0);
		y1=y0+(h*f(x0,y0));
		x0=x0+h;
		y0=y1;	
		k++;
		i++;
	} while(x0<=xn);
	//while(i<xn/h);
//	printf("\n the value of %f and %f  ",y0,y1);for checking 
//	printf("\nTHE final value for x= %f is %f",xn,y0);
	return 0;	
}
float f(float x, float y)
{
	float a=y-x;
	float b=y+x;
	float z=a/b;
	return z;
}
