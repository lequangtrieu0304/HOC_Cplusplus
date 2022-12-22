#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i< n; i++){
		cin>> a[i];
	}
	int d = 0, b = 0, c = 0;
	int a1[1001], b2[1001], c3[1001];
	for(int i = 0; i< n; i++){
		if(a[i] == 0){
			a1[d] = a[i];
			d++;
		}
		else if(a[i] == 1){
			b2[b] = a[i];
			b++;
		}
		else if(a[i] == 2){
			c3[c] = a[i];
			c++;
		}
	}
	
	for(int i =0; i< d; i++){
		cout << a1[i] << " ";
	}
	for(int i =0; i< b; i++){
		cout << b2[i] << " ";
	}
	for(int i =0; i< c; i++){
		cout << c3[i] << " ";
	}
}
