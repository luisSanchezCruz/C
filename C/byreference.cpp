#include <stdio.h>

void swap(int *a,int *b){
	
	//swap function
	int container = *a;
	*a = *b;
    *b = container;
}

int main(){
	
	int a=1,b=3;
	
	swap(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d",b);
	
	return 0;
}
