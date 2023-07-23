#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        //duyet tat cả cac phan tu duung sau
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    selection_sort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}