#include"stdafx.h"
#include<iostream>
using namespace std;
int main() {
	int b=2,atama,say�1 = 1;
	cout << 1<<endl;
	for (int i = 1;i<=10 ; i++) {
		atama = say�1 + b;
		cout << atama<<endl;
		b++;
		say�1 = atama + b;
		b++;
		cout<<say�1 << endl;
	}

	system("PAUSE");
}