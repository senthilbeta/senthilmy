#include<stdio.h>
#include<ctype.h>
#include<string.h>

void sting_pointer(char *string);
int to_upper(char c);
int to_lower(char c);
void string_pointer(char *string){
	printf("String recived is: %s\n",string);
	for(int i=0; i<=strlen(string); i++){
		if(to_upper(string[i])){
			continue;
		}
		else if(to_lower(string[i])){
			string[i] = string[i] - 32;
		}
	}

}
int to_upper(char c){
	if(c>= 65 && c<= 90){
		return 1;
	}
	else{
		return 0;
	}
}
int to_lower(char c){
	if(c >= 97 && c<= 122){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char a[20],c;
	printf("enter the string: ");
	scanf("%s",&a);
	string_pointer(a);
	printf("address of string is: %p\n",a);
	printf("Uppercase string is: %s\n",a);
}
