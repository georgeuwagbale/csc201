//
// Created by georgeuwagbale on 30/10/2021.
//

#include <iostream>
using namespace std;

int main(){
    double length;
    double volume_of_cube;
    cout << "Length of side in metres: ";
    cin >> length;

    volume_of_cube = length * length * length;
    cout << "Volume = " << volume_of_cube << "m^3";
    return 0;
}

