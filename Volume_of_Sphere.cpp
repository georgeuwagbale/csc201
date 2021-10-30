//
// Created by georgeuwagbale on 30/10/2021.
//

#include <iostream>
using namespace std;

int main(){
    double radius,volume
    float pi = 3.142;

    cout << "Input radius: ";
    cin >> radius;

    volume = (4/3) * (pi * (radius * radius));

    cout << "Volume = " << volume;
    return 0;
}
