#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float equation(float);
int main ()
{
	float a,b,e,x; 
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
	printf("NO. of iterations\tFirst assumption\tSecond assumption\tMid value\tValue of mid-value on equation\n");
	do
	{
		x=(a+b)/2;
		printf("\t%d\t\t%f\t\t%f\t\t%f\t\t%f\n",k,a,b,x,equation(x));
		if(equation(a)*equation(x)>0)
		{
			a=x;
		}
		else b=x;
		k=k+1;
	} while(fabs(a-b)>e);
	printf("\nRequired root of the equation is %f",x);
	return 0;
	
}
float equation(float x)
{
	return (x*x*x)-9*x+1;
}
