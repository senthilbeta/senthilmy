#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num%2 == 0)
	{
		printf("Given number is Even: %d\n",num);
	}
	else{
		printf("Given number is odd: %d\n",num);
	}
}
