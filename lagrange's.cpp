#include<stdio.h>
int main ()
{
	int n;
	printf("enter the no.of terms :");
	scanf("%d",&n);
	float x[n];
	float y[n];
	printf("The value of x is : ");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("The value of y is : ");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	float xp;
	printf("The interpolation point is : ");
	scanf("%f",&xp);
	int j;
	float p;
	float yp;// for the final result
	for(i=0;i<n;i++)
	{
		p=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				p*=(xp-x[j])/(x[i]-x[j]);
			}
		}
		yp+=p*y[i];
	}
	printf("The value of xp at yp is : %f",yp);
	return 0;
}
