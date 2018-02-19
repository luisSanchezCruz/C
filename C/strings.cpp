#include <stdio.h>
#include <string.h>


int main(){
	
	//strings declaration
	char greeting[] = {'h','e','l','l','o','\0'};

	char name[] = "luis";
	
	printf("some text:%s\n",greeting);
	printf("%s",name);
	
	
	printf("\n\n\tstring functions:\n");
	
	char string1[]=" hello, world",string2[]="",string3[]="C programers are sexy";
	
	//copies string to another
	strcpy(string2,string1);
	printf("string2:%s\n",string2);
	
	//strcat concat two strings
	strcat(string1,string3);
	printf("result:%s\n",string1);	
	
	//strlen return the length
	printf("string1 length is :%d\n",strlen(string1));	
	
	
	//compare strings
	char data1[] = "string",data2[]="string";
	
    if(strcmp(data1,data2) == 0){
    	printf("same");
    }else{
    	printf("diferent");
    }
    
    char *result = strchr(data1,'r');
    
    printf("\nresult:%c",*result);
    result++;
    printf("\nnext char>:%c",*result);
	
	
	
	return 0;
}
