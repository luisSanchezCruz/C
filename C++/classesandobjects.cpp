#include <iostream>

using namespace std;

class Box{//box class

	public:
		
		double length;
		double breadth;
		double height;	
		
		//constructor
		Box();
		~Box();//destructor
		
		//member functions declaretion
		double getVolume(void);
		double setLength(double leng);
		double setBreadth(double bred);
		double setHeight(double hei);
	    int getColor();
	    
	private:// this is default 
		//some private members
		int color;
		
	protected://its like private but child class can use it 
		double width;
};

//constructor
Box::Box(void){
	
	cout << "object its being created..." << endl;
	
}
Box::~Box(){
	
	cout << "Object its being deleted.." << endl;

}
//member functions definition
double Box::getVolume(){
	    	return length * breadth * height;
}

double Box::setLength(double leng){
	
	length = leng;
}

double Box::setBreadth(double bred){
	
	breadth = bred;
}

double Box::setHeight(double hei){
	
	height = hei;
}

int Box::getColor(){
	return color;
}


class SmallBox:Box{//smallbox  is the derived class
	
	public:
	
		void setSmallWidth(double wid);
		double getSmallWidth(void);
     

};


void SmallBox::setSmallWidth(double wid){
	width = wid;
}

double SmallBox::getSmallWidth(void){
	return width;
}


int main(){
	
	Box box1;
	Box box2;
	
	box1.setLength(6.0);
	box1.setHeight(5.0);
	box1.setBreadth(7.0);
	
	box2.setLength(12.0);
	box2.setHeight(10.0);
	box2.setBreadth(13.0);
	
	cout << "volume of box1 is:" <<  box1.getVolume() << endl;
	cout << "volume of box2 is:" << box2.getVolume() << endl;
	
	//using SmallBox class
	SmallBox miniBox;
	miniBox.setSmallWidth(12.3);
	cout << miniBox.getSmallWidth();
		
	return 0;
}
