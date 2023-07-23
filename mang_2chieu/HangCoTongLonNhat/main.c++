#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[500][500];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        vector<int> row;
        long long ans = -1e18;
        for(int i = 0; i < n; i++) {
            long long sum = 0;
            for(int j = 0; j < m; j++){
                sum += a[i][j];
            }
            if(sum > ans) {
                ans = sum;
                row.clear();
                row.push_back(i);
            }else if( sum == ans){
                row.push_back(i);
            }
        }
        cout << ans << endl;
        for(int i = 0; i < row.size(); i++){
            cout << row[i] + 1 << endl;
        }
    }
}  