#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
	}
	int fre = INT_MIN;
	int res;
	for(auto it : mp){
		if(it.second > fre){
			fre = it.second;
			res = it.first;
		}
	}
	cout << res << " " << fre << endl;
}
