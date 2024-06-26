#include<stdio.h>
int main(){
	int num,i,j;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1; i<=num; i++){
		//printf("%d",i);
		for(j=i; j<=num; j++){
			printf("%d",j);
		}
	printf("\n");
	}
}
