#include<bits/stdc++.h>
using namespace std;

int checkSnt(int n){
    int check = 1;
    for(int i = 2; i < n/2; i++){
        if(n % i == 0){
            check = 0;
            break;
        }
    }
    if(check == 1) return 1;
    else return 0;
}

void swap1(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void b_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(checkSnt(arr[i])){
            for(int j = i + 1; j < n; j++){
                if(checkSnt(arr[j])){
                    if(arr[i] > arr[j]){
                        swap1(&arr[i], &arr[j]);
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b_sort(a, n);
    return 0;
}