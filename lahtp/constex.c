#include <stdio.h>
#define PI 3.14
int main(){
	float area;
	int radius;
	printf("enter the radius value: ");
	scanf("%d",&radius);
	area = PI * radius * radius;
	printf("Area = %f\n",area);

}
