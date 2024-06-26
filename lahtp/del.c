#include<stdio.h>
int main()
{
  int re;
  re = remove("datatype.c");
  if(re==0)
  {
	printf("FILE IS DELETED.");
  }
  else
  {
	printf("FILE IS NOT DELETED.");
  }
}
