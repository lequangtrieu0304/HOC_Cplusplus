#include<iostream>

using namespace std;

int main(){
	int n; cin >>n;
	int a[n];
	for(int i= 0; i<n; i++){
		cin >> a[i];
	}
	
	int res = 0, dem = 0;
	for(int i=1; i<n; i++){
		if(a[i] == a[i-1]){
			dem++;
		}
		else dem = 1;
		res = max(res, dem);
	}
	cout << n - res << endl;
}
