#include <iostream>
using namespace std;

// Sum of number entered

// int main() {
//     int number;

//     cout <<"Enter a number: ";
//     cin >> number;

//     int sum = 0;
//     for (int i = 0; i <= number; i ++) {
//         sum = sum + i;
//     }

//     cout <<"Sum is " << sum << endl;
    
//     return 0;
// }

// Factorial Computation

int main() {
    int number;

    cout << "Enter a number:" ;
    cin >> number;

    int sum = 1;
    for (int i=1; i <= number; i++) {
         sum *= i; // 1*2*3
    }

    cout << "Sum is"<< sum;

    return 0;
}