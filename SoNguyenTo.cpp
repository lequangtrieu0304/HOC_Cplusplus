#include<iostream>
using namespace std;

int SNT(int n){
    if(n < 2) return 0;
    int check = 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            check = 1;
            break;
        }
    }
    if(check == 0){
        return 1;
    }
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        if(SNT(i)){
            cout << i << " ";
        }
    }
}