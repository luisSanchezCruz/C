#include <stdio.h>

int main(){
	/*
	printf("enter a value:");
	int c = getchar(); 
	putchar(c);
	*/
	char str[100];
	printf("enter a value:");
	gets(str);
	
	printf("u enter:");
	puts(str);
	
	char mystring[100];
	int num;
	
	printf("\n\n enter a value:");
	scanf("%d %s",&num,mystring);
	
	printf("i:%d\n",num);
	printf("mystring:%s",mystring);
	
	return 0;
}
