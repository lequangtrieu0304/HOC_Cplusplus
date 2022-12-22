#include<iostream>
using namespace std;

int main(){
	bool ok = false;
	bool ok1;
	if(!false){
		ok1 = !ok;
	}
	else {
		ok1 = ok;
	}
	cout << ok1;
}
