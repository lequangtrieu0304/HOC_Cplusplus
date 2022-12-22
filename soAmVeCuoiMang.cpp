#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
	int duong[1001], am[1001];
	int m = 0, k = 0;
	for(int i = 0; i< n; i++){
		if(a[i] >= 0){
			duong[m] = a[i];
			m++;
		}
		else if(a[i] < 0){
			am[k] = a[i];
			k++;
		}
	}
	
	for(int i = 0; i< m; i++){
		cout << duong[i] << " ";
	}
	for(int i = 0; i< k; i++){
		cout << am[i] << " ";
	}
}
