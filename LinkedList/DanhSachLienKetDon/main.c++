#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

typedef struct Node* node;

//cap phat dong 1 node vơi kieu du lieu la so nguyen
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

// kiem tra rong
bool empty(node a){
    return a == NULL;
}

int Size(node a){
    int cnt = 0;
    while(a != NULL){
        cnt++;
        a = a->next;
    }
    return cnt;
}

//them mot phan tu vao dau danh sach
void inserFirst(node &a, int x){
    node tmp = makeNode(x);
}

int main() {
    cout << sizeof(Node) << endl;
    return 0;
}