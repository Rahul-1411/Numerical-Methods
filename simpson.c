#include<stdio.h>
float integration(float);
int main ()
{
	float a,b;
	printf("enter the lower limit\n");
	scanf("%f",&a);
	printf("enter the upper limit\n");
	scanf("%f",&b);
	int n;
	printf("enter the  no . of intervals \n");
	scanf("%d",&n);
	float h;
	h=(b-a)/n;
	printf("The step length is %f\n",h);
	float x[n+1];
	float y[n+1];
	int i;
	 for(i=0;i<=n;i++)
	 {
	 	x[i]=a+i*h;
	 }
	 for(i=0;i<=n;i++)
	 {
	 	y[i]=integration(x[i]);
	 }
	 printf("The data is as follows:\n");
//	 for(i=0;i<=n;i++)
//	 {
//	 	printf("x%d = %f\n",i,x[i]);
//	 }
//	 printf("\n");
//	 for(i=0;i<=n;i++)
//	 {
//	 	printf("y%d = %f\n",i,y[i]);
//	 }
       i=0;
       printf("\tNO . OF ITERATION\tX\t\tY\n");
     do
	{
		printf("\t\t%d\t\t%f\t%f\n",i,x[i],y[i]);
		i++;
	}while(i<=n);
	 float sum = 0;
	 int pos=1;
	 sum=integration(a)+integration(b);
	 float j;
	 for(j=a+h;j<b;j=j+h)
	 {
	 	if(pos%2==0)
	 	sum=sum+2*integration(j);
	 	else 
	 	sum=sum+4*integration(j);
	 	pos++;
	 }
	 sum=(h*sum)/3;
	 printf("THE VALUE OF THE INTERGAL IS : %f",sum);
}
float integration(float x)
{
	return 1/(1+x);
}
