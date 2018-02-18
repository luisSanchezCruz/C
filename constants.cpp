#include <stdio.h>

//constants with #define
#define NAME "Luis Sanchez"
#define SALARY 10

//and with const
const int PI = 3.14;

int main(){
	
	const float GRAVITY = 9.4;
	printf("this is my name:%s\n",NAME);
	printf("this is my salary: %d\n", SALARY);
	printf("PI value is:%d\n",PI);
	printf("our gravity is:%.2f",GRAVITY);
	return 0;
}
