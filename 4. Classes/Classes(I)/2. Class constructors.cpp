/**
 * Class constructors
 */

#include <iostream>
using namespace std;

class Rectangle{
private:
	int width, height;
public:
	Rectangle(int x, int y){
		width = x;
		height = y;
	}
	void set_value(int x, int y){
		width = x;
		height = y;
	}
	int area(){
		return width * height;
	}
};

int main(){
	Rectangle r1(10,20);

	cout<<r1.area()<<endl;
	return 0;
}