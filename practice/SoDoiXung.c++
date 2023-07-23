#include<bits/stdc++.h>
using namespace std;

int sdx(int n){
    int tmp = n;
    int check = 0;
    while(n > 0){
        check = n%10 + check*10;
        n /= 10;
    }
    if(check == tmp) {
        return 1;
    }
    return 0;
}

int main(){
    int t; cin >> t;
    while(t-- > 0){
        int n; cin >> n;
        if(sdx(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}