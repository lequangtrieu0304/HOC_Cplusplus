#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n){
    for(int i = 0; i < n; i++){
        int x = a[i], pos = i - 1;
        while(pos >= 0 && x < a[pos]){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    insertion_sort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}