#include<iostream>
using namespace std;

int main(){
	int sum = 0;
	for(int i = 0; i< 5; i++){
		for(int j = 0; j < 5; j++){
			sum++;
		if(j==1) continue;
		cout << sum << i << j << endl;
	}
}


