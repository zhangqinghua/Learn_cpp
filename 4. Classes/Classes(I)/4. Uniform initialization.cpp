/**
 * classes and uniform initialization
 */
#include <iostream>

using namespace std;

class Circle{
private:
	double radius;
public:
	Circle(double r){
		radius = r;
	}
	double circum(){
		return 3.14 * 2 * radius;
	}
};

int main(){

	Circle foo(10);// functional form

	Circle bar = 10;// assignmemt init

	// Circle baz = {30};// in C++98 'baz' must be initialized by constructor, not by '{...}'

	// Circle qux {50};// C++98 'qux' must be initialized by constructor, not by '{...}'

	cout<<"foo's circum is "<<foo.circum()<<endl;

	cout<<"bar's circum is "<<bar.circum()<<endl;


	return 0;
}