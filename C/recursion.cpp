#include <stdio.h>

//recursion
unsigned long long int factorial(unsigned int i){
	
	if(i<=1){
		return 1;
	}
	
	return  i * factorial(i-1);
}

int fibonacci(int i){
	
	if(i==0){
		return 0;
	}
	
	if(i==1){
		return 1;
	}
	
	return fibonacci(i-1) + fibonacci(i-2);
}

int main(){
	
	printf("C support recursion!\n");
	int i=12;
	printf("factorial of %d is :%d\n",i,factorial(i));
	
	int j;
	for(j=0; j<10; j++){
		printf("%d\n",fibonacci(j));
	}
	
	return 0;
}
