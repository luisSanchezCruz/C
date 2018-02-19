#include <stdio.h>
#include <string.h>
union Data{
	
	int i;
	float f;
	char str[20];
	
};


int main(){
	
	union Data data;
	data.i = 5;
	data.f = 9.8;
	strcpy(data.str,"this is the string bro");
	
	printf("Memory size occupied by data:%d\n",sizeof(data));
	printf("data.i:%d\n",data.i);
	printf("data.f:%f\n",data.f);
	printf("data.str:%s\n",data.str);
	return 0;
}
