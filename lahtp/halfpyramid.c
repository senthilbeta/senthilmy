#include<stdio.h>
int main(){
	int num,i,j;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=0; i<=num; i++){
		for(j=num; j>i; j--){
			printf("*");
		}
	printf("\n");
	}
}
