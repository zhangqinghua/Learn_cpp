// Overloading operators
#include <iostream>

using namespace std;

class CVector{
public:
	int x, y;
	CVector(){};
	CVector(int x, int y):x(x), y(y){};
	CVector operator +(const CVector& parames){
		CVector temp;
		temp.x = x + parames.x;
		temp.y = y + parames.y;	
		return temp;
	}
};

int main(){

	CVector a, b(10, 20), c(30, 50);

	a = b + c;

	cout<<a.x<<endl;
	cout<<a.y<<endl;

	return 0;
}