#include<stdio.h>
int main(){
	/*int var = 10;
	int * ptr;
	ptr = &var;*/
	int i,x;
	char y ='a';
	char senthil1[] = "senthilnathan";
	char sen[8] = "senthil";
	char senthil2[8] ={'s','e','n','t','h','i','l'};
	char senthil[]={'s','e','n','t','h','i','l','\0'};
	char *p = &y;
	for(i=0;i<=sizeof(senthil);i++){
		printf("value = %c address = %p\n",senthil[i],&senthil[i]);
	}
	printf("\n");
	for(i=0;i<sizeof(senthil2);i++){
		printf("Value = %c address = %p\n",senthil2[i],&senthil2[i]);
	}
	printf("\n");
	for(i=0;i<sizeof(sen);i++){
	        printf("Value = %c address = %p\n",sen[i],&sen[i]);

	}
	printf("sen: %s\n",sen);
	printf("senthil : %s\n",senthil);
	printf("senthil1: %s\n",senthil1);
	printf("senthil2 : %s\n",senthil2);

	printf("value of ptr = %p\n",p);
	for(x=0;x<=sizeof(senthil)+sizeof(sen)+sizeof(senthil1)+sizeof(senthil2);x++){
		printf("value = %c address = %p\n",*p,p);
		p--;
	}
	for(y=0;y<20;y++)
	{
		printf("value = %c address = %p\n",*p,p);
		p++;
	}
	/*printf("address of var %p\n",&var);
	printf("address of ptr %p\n",&ptr);
	printf("value of var  %d\n",var);
	printf("value  of ptr %p\n",ptr);
	printf("value of var %d pointer reference %p\n",*ptr,&var);*/
	return 0;
}
