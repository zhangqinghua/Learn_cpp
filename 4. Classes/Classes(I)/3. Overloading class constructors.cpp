/**
 * overloading class constructors
 */

#include <iostream>

using namespace std;

class Rectangle{
private:
	int width, height;
public:
	Rectangle(){
		cout<< "------------>";
		width = 5;
		height = 10;
	}
	Rectangle(int x, int y){
		width = x;
		height = y;
	}
	int area(){
		return 10;
	}
 };

 int main(){

 	Rectangle r1;

 	r1.area();

 	return 0;
 }