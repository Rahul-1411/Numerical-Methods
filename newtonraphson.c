#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float equation(float);
float df(float x);
float ddf(float);
int main ()
{
	float a,b,e,x0; 
	float qx;// for convergenecy test
	float x1;// for the next result
	// a is the first guess and b is  the second ques by trial and errror method 
	// e is the accuracy variable and x is the mid i.e x=(a+b)/2
	int k=1;// no of iteration
	printf("\n enter the accuracy\n");
	scanf("%f",&e);
	do
	{
		printf("\n enter the value of the first assumptions\n");
		scanf("%f",&a);
		printf("\n enter the value of the second assumptions\n");
		scanf("%f",&b);
	} while(equation(a)*equation(b)>0);
//	printf("NO. of iterations\tFirst mid value\tfuncition value\tderivativevalue\tNext value\n");
		printf("NO. of iterations\tFirst mid value\t\tfunction value\t\tDerivative value\tNextValue\n");
	          x0=(a+b)/2;
		qx=equation(x0)*ddf(x0)/(pow(df(x0),2));
		if(qx>=1)
		{
			printf("\n the equation is divergent");
			return;
		}
		else 
		{
	do
	{
		x1=x0-(equation(x0))/df(x0);
		printf("\t%d\t\t%f\t\t%f\t\t%f\t\t%f\n",k,x0,equation(x0),df(x0),x1);
		k=k+1;
		x0=x1;
	} while(fabs(equation(x0))>e);
}
	printf("\nRequired root of the equation is %f",x0);
	return 0;	
}

float equation(float x)
{
	return (x*x*x)-8*x-4;
}
float df(float x)
{
	return (3*x*x)-8;
}
float ddf(float x)
{
	return 6*x;
}
