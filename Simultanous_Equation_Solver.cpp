//
// Created by uwagbalegeorge on 30/10/2021.
//

#include <iostream>
using namespace std;

int main(){
    double a,b,c,d,e,f,x,y,dn;

    cout << "Equation 1:\n";
    cout << "Coefficient of x:\n";
    cin >> a;
    cout << "Coefficient of y: \n";
    cin >> b;
    cout << "Constant: \n";
    cin >> e;
    cout << "\n";

    cout << "Equation 2:\n";
    cout << "Coefficient of x: \n";
    cin >> c;
    cout << "Coefficient of y: \n";
    cin >> d;
    cout << "Constant: \n";
    cin >> f;

    dn = (a * d) - (b * c);
    x = ((e * d) - (b * f)) /dn;
    y = ((a * f) - (e * c)) /dn;

    cout << "x = " << x << " , y = " << y;
    return 0;
}
