#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i+=2){
		if(n%2==0){
			cout << a[i] + a[i+1] << " ";
		}
		else {
			cout << a[i] + a[i+1] << " ";
//			cout << a[n-1];
		}
	}
}
