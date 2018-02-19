#include <stdio.h>
/*
 ***file stream modes
[r]->Opens an existing text file for reading purpose.

[W]->Opens a text file for writing. If it does not exist, 
then a new file is created. Here your program will start 
writing content from the beginning of the file.

[a]->Opens a text file for writing in appending mode. 
If it does not exist, then a new file is created. 
Here your program will start appending content in the existing file content.

[r+]->Opens a text file for both reading and writing.

[w+]->Opens a text file for both reading and writing.
 It first truncates the file to zero length if it exists, 
 otherwise creates a file if it does not exist.

[a+]->Opens a text file for both reading and writing.
 It creates the file if it does not exist. The reading 
 will start from the beginning but writing can only be appended.

*/
void createFile(){
    
	FILE *fp;
	
	fp = fopen("test.txt","w+");
	fprintf(fp,"testing for fprintf\n");
	fputs("testing for fputs",fp);
	fclose(fp);
	
	
}

void readFile(){
	
	FILE *fp;
	char buffer[255];
	
	fp = fopen("test.txt","r");
	fscanf(fp,"%s",buffer);
	printf("1:%s",buffer);
	
	
    fgets(buffer, 255, (FILE*)fp);
    printf("2: %s\n", buffer );
   
    fgets(buffer, 255, (FILE*)fp);
    printf("3: %s\n", buffer );
	
	
	fclose(fp);
	
	
}
int main(){
	
	createFile();	
	readFile();
	return 0;
}
