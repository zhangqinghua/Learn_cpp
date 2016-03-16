/**
 * Point to classes
 */
#include <iostream>

using namespace std;

class Rectangle{
private:
	int width, height;
public:
	Rectangle(int x, int y): width(x),height(y){};
	int area(){return width * height;}
};

int main(){

	Rectangle obj(3, 4);

	Rectangle *foo, *bar, *baz[2];

	foo = &obj;


	bar = new Rectangle(10, 20);

	// baz = new Rectangle[2]{(5,7),(8,2)}; extended initializer lists only available with -std=c++0x or -std=gnu++0x [enabled by default]

	baz[0] = new Rectangle(5, 7);

	baz[1] = new Rectangle(555, 544);

	cout<<"foo's area is "<<foo->area()<<endl;

	cout<<"bar's area is "<<bar->area()<<endl;

	cout<<"baz[0]'s area is "<<baz[0]->area()<<endl;	

	cout<<"baz[1]'s area is "<<baz[1]->area()<<endl;

	return 0;
}
