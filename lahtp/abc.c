#include<stdio.h>
int main(){
	char c,j,num;
	printf("Enter the pyramid limit: ");
	scanf("%c", &num);
	for(c='A'; c<= num; c++){
		for(j='A'; j<=c; j++){
			printf("%c",j);
		}
	printf("\n");
	}
}
