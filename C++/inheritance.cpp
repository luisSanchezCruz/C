#include <iostream>

using namespace std;

//base class
class Shape{
	public:
		void setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height = h;
		}
		
	protected:
		int width;
		int height;
};

//derived class

class Rectangle:public Shape{
	public:
		int getArea(){
			return (width * height);
		}
};


int main(){
	Rectangle Rect;
	
	Rect.setWidth(5);
	Rect.setHeight(8);
	
	cout << "output:" << Rect.getArea(); 
	return 0;
}
