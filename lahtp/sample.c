#include<stdio.h>
int main(){
	int number;
	printf("Enter the your age: ");
	scanf("%d",&number);
	if(number>=18){
		printf("your are eligible for voting.\n");
	}
	else{
		printf("your age lessthen 18, not eligible for voting.\n");
	}
}

