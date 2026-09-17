#include <iostream>
#include <cmath>
using namespace std;

void solveQuadratic(double a,double b, double c) {
    double x1 = ((-b) + sqrt(pow(b, 2) - (4*a*c)))/2*a ; 
    double x2 = ((-b) + sqrt(pow(b, 2) - (4*a*c)))/2*a ;

    cout << "x1 = " << x1 << endl;
    cout << "x1 = " << x2 << endl;
}

int main() {

    double a, b, c;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> b;

    solveQuadratic(a,b,c);

}