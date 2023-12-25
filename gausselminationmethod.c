#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n;// global decalration otherwise error aayega n not defined.
void lowertriangluarzero(float arr[][n+1],int);// it is must to give column size in function prototype
void printstepbystep(float arr[][n+1],int );
void findvariable(float arr[][n+1], float variable[],int );
void printvariable(float variable[],int );
int main ()
{
	printf("enter the no.of variable you want to find from the equation\n");
	scanf("%d",&n);
	float variable[n];
	float arr[n][n+1];
	printf("enter the equation in matrix form\n");
	int i,j;
	// equation mil gaya 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			scanf("%f",&arr[i][j]);
		}
	}
	lowertriangluarzero(arr,n);
	findvariable(arr, variable ,n);
	printvariable(variable,n);
	return 0;
}
void lowertriangluarzero(float arr[n][n+1],int n)
{
	int i,j,k;
	float ratio;
	for( i=0;i<n;i++)
	{
		if(arr[i][i]==0.0)
		{
			printf("equation cannot be solved\n");
			return;
		}
		for(j=0;j<n;j++)
		{
			if(j>i) // isse lower triangle aur diagonal nahi count hoga i.e 
			// a[0][0],a[1][0],a[1][1],a[2][0],a[2][1],a[2][2].			
		{
				ratio=arr[j][i]/arr[i][i]; // diagonal se divide wala step
				for(k=0;k<n+1;k++)
				{
					arr[j][k]=arr[j][k]-(ratio*arr[i][k]);// formula
					printf("STEP BY STEP CALUCALTION \n");
					printstepbystep(arr,n);
					printf("\n");	
				}
			}
		}
	}
	
}
void printstepbystep(float arr[n][n+1], int n)
{
	int i;
	 int j;
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n+1;j++)
	 	{
	 		printf("%f ",arr[i][j]);
		 }
		 printf("\n");
	 }
	
}
void findvariable(float arr[n][n+1], float variable[n],int n)
{
	int i;
	 int j;
	 float sum;
	 variable[n-1]=arr[n-1][n]/arr[n-1][n-1];
	 // directly find the final variable
	 for(i=n-2;i>=0;i--)
	 {
	 	sum=0;
	 	for(j=i+1;j<n;j++)
	 	{
	 		sum=sum+arr[i][j]*variable[j];
	 		variable[i]=(arr[i][n]-sum)/arr[i][i];// formula by observation 
		 }
	 }
}
void printvariable(float variable[n],int n)
{
	int i;
	printf("the values are:\n");
	for(i=0;i<n;i++)
	{
		printf("value of %d is %f\n",i,variable[i]);
	}
}
