#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float);
float df(float );
float ddf(float x);
int main ()
{
	float x0,x1,e,x2;
	float qx; 
	// a is the first guess and b is  the second ques by trial and errror method 
	// e is the accuracy variable and x is the mid i.e x=(a+b)/2
	int k=1;// no of iteration
	printf("\n enter the accuracy\n");
	scanf("%f",&e);
	do
	{
		printf("\n enter the value of the first assumptions\n");
		scanf("%f",&x0);
		printf("\n enter the value of the second assumptions\n");
		scanf("%f",&x1);
	} while(f(x0)*f(x1)>0);
		qx=f(x0)*ddf(x0)/(pow(df(x0),2));
		if(qx>=1)
		{
			printf("\n the equation is divergent");
			return;
		}
	printf("NO. of iterations\tFirst assumption\tSecond assumption\tMid value\tValue of the mid value\n");
	do
	{
		x2= x0-f(x0)*(x1-x0)/(f(x1)-f(x0));
		printf("\t%d\t\t%f\t\t%f\t\t%f\t\t%f\n",k,x0,x1,x2,f(x2));
		x0=x1;
		x1=x2;
		k=k+1;
	} while(fabs(f(x2))>e);
	printf("\nRequired root of the equation is %f",x2);
	return 0;
	
}
float f(float x)
{
		return (x*x*x)-9*x+1;
}
float df(float x)
{
	return (3*x*x)-9;
}
float ddf(float x)
{
	return 6*x;
}
