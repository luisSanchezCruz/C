#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void disp(int arr[],int size){
	
	int i;
	for(i=0; i<size;i++){
		printf("%d\n",arr[i]);
	}
	
}

int main(){
	
    int numbers[] = {5,2,3,4,10,2,28};
    int length = sizeof(numbers)/sizeof(numbers[0]);
	 
    disp(numbers,length);	
	
	return 0;
}
