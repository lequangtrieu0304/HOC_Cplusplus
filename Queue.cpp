#include<iostream>
#include<queue>

using namespace std;

int main() {
	queue<int> q;
	int n, k, temp;
	cin >> n;
	for(int i=0; i< n; i++){
		cin >> temp;
		q.push(temp);
	}
	cin >> k;
	
	for(int i=0; i< k; i++){
		int x = q.front();
		q.pop();
		q.push(x);
	}
	
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
}
