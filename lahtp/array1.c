#include<stdio.h>
int main(){
	int ar[10],i,size;
	printf("Enter the array size: ");
	scanf("%d",&size);
	for(i=0; i<size; i++){
	scanf("%d", &ar[i]);
	}
	printf("The Array Values is:\n");
	for(i=0;i<size;i++)
	{
	printf("%d\n",ar[i]);
	}
	return 0;

}
