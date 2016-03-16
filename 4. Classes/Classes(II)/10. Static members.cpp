/*Static member in the class*/
#include <iostream>

using namespace std;

class Dummy{
public:
	static int n;

	Dummy(){
		n++;
	}
};

int Dummy::n = 100;

int main(){

	

	Dummy d1;

	Dummy d2;

	cout<<d1.n<<endl;
	cout<<d1.n<<endl;

	return 0;
}