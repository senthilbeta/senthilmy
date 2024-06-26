#include<stdio.h>
int main(){
	int i,j,row,k,space;
	printf("Enter row of pyramid: ");
	scanf("%d",&row);
	space = row - 1;

	for(i=1; i<=row*2; i=i+2){
		for(k= space; k>0; k--){
		printf(" ");
		}
		space = space - 1;
		for(j=1; j<=i; j++){
			printf("%d",i);
		}
	printf("\n");
	}

}

