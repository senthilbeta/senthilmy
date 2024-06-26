#include<stdio.h>
int main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter the A matrix elements: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the B matrix elements: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	printf("Addition od A + B \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j] = a[i][j]+b[i][j];
		printf("c[%d][%d] = %d \n",i,j,c[i][j]);
		}
	}

}
