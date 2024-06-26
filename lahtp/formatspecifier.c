#include<stdio.h>
int main(){
	float a = 23.35566;
	int *ptr;
	int c=300;
	ptr = &c;
	printf("octal value of a is %o\n",a);
	printf("hexa value of a is %X\n",a);
	printf("hexa value is %#X\n",a);
	printf("address of c is %p\n",ptr);
        printf("value of c is %d\n",c);
        printf("value of ptr is %d\n",*ptr);
	printf("expont value is %e\n",a);
	printf("a value is %.3f\n",a);
        printf("a value is %3f\n",a);

}
