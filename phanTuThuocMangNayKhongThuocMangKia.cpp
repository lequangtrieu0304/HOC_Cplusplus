#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
	set<int> se;
	for(int i = 0; i< m; i++){
		int x; cin >> x;
		se.insert(x);
	}
	bool ok = false;
	for(int i = 0; i<n; i++){
		if(se.count(a[i]) != 1){
			cout << a[i] << endl;
			ok = true;
		}
	}
	if(!ok){
		cout << "not found";
	}
}
