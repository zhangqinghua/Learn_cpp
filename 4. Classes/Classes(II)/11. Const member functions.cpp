/*Construstor on const object*/
#include <iostream>
using namespace std;

class Dummy{
public:
	int x;
	Dummy(int val){x=val;}
};

int main(){

	const Dummy d1(10);

	cout<<d1.x<<endl;
	return 0;
}


