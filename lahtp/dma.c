#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,n,i;
	printf("Enter the size: ");
	scanf("%d",&n);
	p = (int *)malloc(sizeof(int)*n);
	printf("Enter the values: ");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("Value of array is: ");
	for(i=0;i<n;i++)
		printf("p[%d] = %d\n",i,p[i]);
	return 0;

}
