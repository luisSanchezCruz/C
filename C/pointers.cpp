#include <stdio.h>

int main(){
	
	int var = 20;
	int arr[10];
	int *pointer;
	
	pointer = &var;
	
	printf("memory address is:%x\n",&var);
	printf("memory address is :%x\n",&arr);
	printf("pointer is :%d",*pointer);
	return 0;
}
