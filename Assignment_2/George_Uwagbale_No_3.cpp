// Created by uwagbalegeorge on 06/11/2021
// MIT Licenced

// A C++ program to display and add all odd numbers within a provided range.

#include <iostream>
#include <sstream>
using namespace std;

int main(){
	int upper_limit, lower_limit;
	int sum = 0;
	string value;

	cout << "Input upper limit : ";
	getline(cin, value);
	upper_limit = stoi(value);

	cout << "Input lower limit : ";
	getline(cin, value);
	lower_limit = stoi(value);
	
	// Checks if lower limit is less than upper limit
	if ( lower_limit < upper_limit ){

		while( upper_limit > lower_limit){
			++lower_limit;

			if( lower_limit % 2 == 1){
				sum += lower_limit;
				cout << lower_limit << "  ";
			}
		}
	}
	
	// Checks if lower limit is greater than upper limit
	else if( lower_limit > upper_limit){
		cout << "Lower limit shouldn't be greater than lower_limit" << endl;
	}

	cout << endl;
	cout << "The sum of all odd numbers from " << value << " to " 
	     << upper_limit << " is " << sum << endl;
	return 0;
}