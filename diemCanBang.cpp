#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int sum =0;
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	
	int sumleft = 0;
	bool ok = false;
	for(int i=0; i<n; i++){
		sum -= a[i];		
		if(sumleft == sum){
			cout << i << " ";
			ok = true;
		}
		sumleft += a[i];
	}
	if(!ok) cout << "-1\n";
}
