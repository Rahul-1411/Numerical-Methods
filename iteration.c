#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float equation(float);
float df(float );
float value(float );
int main ()
{
	float a,b,e,x; 
	float x3;
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
		x3=(a+b)/2;
	if(fabs(df(x3))<1)
	{
		printf("Method can be applied\n");
	}
	printf("NO. of iterations\tFirst assumption\tSecond assumption\tMid value\tValue of mid-value on equation\n");
	do
	{
		
		x=value(x3);
		printf("\t%d\t\t%f\t\t%f\t\t%f\t\t%f\n",k,a,b,x3,value(x3));
		x3=x;
		k=k+1;
	} while(fabs(equation(x))>e);
	printf("\nRequired root of the equation is %f",x);
	return 0;
	
}
float equation(float x)
{
	return x*x*x + x*x-1;
}
float df(float x)
{
	return 1/2.0 *(pow(1,pow((1+x),3/2.0)));
}
float value(float x)
{
	return 1/sqrt(1+x);
}
