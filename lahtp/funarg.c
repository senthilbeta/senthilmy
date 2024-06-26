#include<stdio.h>
int is_even(int num);

int is_even(int num){
	if(num%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,s;
	while(1){
	printf("Enter the number:(0 to quit) ");
	scanf("%d",&a);
	if(a == 0){
		break;
	}
	if(is_even(a)){
		printf("Given number is Even.\n");
	}
	else{
		printf("Given number is odd.\n");
	}
	}
	return 0;
}
