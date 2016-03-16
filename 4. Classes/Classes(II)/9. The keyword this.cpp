/*
Example on this
this 代表本对象的地址
*/
#include <iostream>
using namespace std;

class Dummy{
public:
	int x, y;
	Dummy(){};
	Dummy(int a, int b){
		x = a;
		y = b;
	}
	bool isitme(Dummy* it){// Dummy it, 相当于  Dummy it = d1;  Dummy& it 相当于 Dummy& it = d1;
		cout<<"it's value is "<<it<<endl;
		cout<<"this's value is "<<this<<endl;

if(this == it){
			return true;
		}else{
			return false;
		}
	}
};

int main(){
	Dummy d1(10, 20);

Dummy* d2 = &d1; // 相当于 Dummy& d4 = d1;

Dummy d3 = d1;

Dummy* d4 = d2;

if(d2->isitme(d4)){
		cout<<"there are the same!"<<endl;
	}else{
		cout<<"there are not the same!"<<endl;
	}

return 0;
}

