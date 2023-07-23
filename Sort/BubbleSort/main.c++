#include<bits/stdc++.h>
using namespace std;

void swap1(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap1(&arr[j], &arr[j+1]);
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
    bubble_sort(a, n);
    return 0;
}