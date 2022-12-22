#include<bits/stdc++.h>
using namespace std;

struct sv{
	string ma, ten, lop, ns;
	double gpa;
	
	void in(){
		cout << "------------------------------------\n";
		cout << "Ma sinh vien: " << ma << endl;
		cout << "Ten sinh vien: " << ten << endl;
		cout << "Lop: " << lop << endl;
		cout << "Ngay sinh: " << ns << endl;
		cout << "GPA" << fixed << setprecision(2) << gpa << endl;
		cout << "------------------------------------\n";
	}
	
	void nhap(){
		cout << "Nhap ma sinh vien: "; cin >> ma;
		cout << "Nhap ten sinh vien: "; 
		cin.ignore();
		getline(cin, ten);
		cout << "Nhap lop: "; cin >> lop;
		cout << "Nhap ngay sinh: "; cin >> ns;
		cout << "Nhap gpa: "; cin >> gpa;
	}
};

void inds(sv a[], int n){
	cout << "Thong tin danh sach sinh vien: \n";
	for(int i = 0; i< n; i++){
		a[i].in();
	}
}

void tkma(sv a[], int n){
	
}

int main(){
	
}
