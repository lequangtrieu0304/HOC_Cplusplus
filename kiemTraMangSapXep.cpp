#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
	int ok = 1;
	for(int i = 1; i<n; i++){
		if(a[i] > a[i-1]){
			ok = 0;
			break;
		}
	}
	if(ok == 1){
		cout << "1";
	}else {
		cout << "0";
	}
}
