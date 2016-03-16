/**
 * Member initialization
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

class Cylinder{
private:
	Circle base;
	double height;
public:
	
	Cylinder(double r, double h):base(r){
		height = h;
	}
	double volume(){
		return base.circum() * height;
	}
};

int main(){

	Cylinder cylinder(10,500);

	cout<< cylinder.volume();

	return 0;
}