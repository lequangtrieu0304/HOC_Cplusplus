#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int a[1001];
	for(int i=0; i< n; i++){
		cin >> a[i];
	}
	
	bool kt = false;
	
	for(int i = 0; i< n; i++){
		if(i%2 == 0 && a[i]%2==1){
			cout << a[i] << " ";
			kt = true;
		}
	}
	if(!kt) cout << "NULL";
}
