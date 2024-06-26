#include<stdio.h>
int sqr(int x)
{
	int sq;
	sq= x * x;
	return sq;
}
int main(){
	int sq,n;
	printf("Enter the n value: ");
	scanf("%d",&n);
	sq = sqr(n);
	printf("%d\n",sq);
}

