// Created by uwagbalegeorge on 06/11/2021
// MIT Licensed

// A C++ program to display the multiplication table from 1 to n.
#include <iostream>
using namespace std;


int main(){
	double n, i;
	int a;
	string value;

	cout << "Enter value for n : ";
	getline(cin, value);
	n = stoi(value);

	for (a = 1; a <= 12; ++a){
		for ( i = 1;  i <= n; ++i){
			cout << a << " * " << i << " = " << a*i << "\t";
		}
		cout << endl;
	}
	return 0;
}