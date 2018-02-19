#include <stdio.h>
#include <string.h>

//how to declare structures
struct Books{
	
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
	
};


void printBook(struct Books book){
	
	printf("Book title:%s\n",book.title);
	printf("Book author:%s\n",book.author);
	printf("Book subject:%s\n",book.subject);
	printf("Book id:%d",book.book_id);
}

void printBookWithPointer(struct Books *book){
	
	printf("Book title:%s\n",book->title);
	printf("Book author:%s\n",book->author);
	printf("Book subject:%s\n",book->subject);
	printf("Book id:%d",book->book_id);
	
}
int main(){
	
	struct Books book1;
	struct Books book2;
	
	
	strcpy(book1.title,"Nodejs for pros");
	strcpy(book1.author,"Luis sanchez");
	strcpy(book1.subject,"programing web apps");
	book1.book_id = 29;
	
	strcpy(book2.title,"CSS And responsive desing");
	strcpy(book2.author,"Snoop dog");
	strcpy(book2.subject,"web styles");
	book2.book_id = 30;
	
	 //printf book info
	printBook(book1);
	printf("\n______\n");
	printBookWithPointer(&book2);
	
	//structures and pointers
	
	struct Books *pointer;
	
	pointer = &book1;
	
	printf("\n address:%x",pointer);
	
	return 0;
}
