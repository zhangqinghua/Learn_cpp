// non-member operator overloads

#include <iostream>

using namespace std;

class CVector{
public:
	int x, y;
	CVector(){};
	CVector(int x, int y):x(x), y(y){};
	
};
 
CVector operator + (const CVector& lhs, const CVector& rhs) {
	CVector temp;
	temp.x = lhs.x + rhs.x;
	temp.y = lhs.y + rhs.y;
	return temp;
}

int main(){


	CVector c1, c2(10, 20), c3(5, 8);

	c1 = c2 + c3;

	cout<<c1.x;

	return 0;
}