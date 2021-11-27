// Created by uwagbalegeorge on 06/11/2021
// MIT Licensed

// A C++ program to display the first nth term of the Fibonacci sequence.

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main(){
	int nth_term, random_int;
	int i = 2;
	string value;

	cout << "Input the number of terms: ";
	getline(cin, value);
	nth_term = stoi(value);
	
	long long Fibonacci[nth_term];
	
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;

	while (i < nth_term){
		Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
		++i;
	}
	
	
	for (i = 0; i < nth_term; ++i){ 
		cout << Fibonacci[i] << " ";
		
	}
	return 0;
}


