#include <iostream>
using namespace std;

// int main() {
//     int number;

//     cout << "Enter a number:" ;
//     cin >> number;

//     int sum = 1;
//     for (int i=1; i <= number; i++) {
//          sum *= i; // 1*2*3
//     }

//     cout << "Sum is"<< sum;

//     return 0;
// }

// int main() {
//     int number, next;

//     cout << "Enter number: " ;
//     cin >> number;

//     int first=0;
//     int second=1;
//     for (int i=1; i <= number; i ++) {
//         cout << first << " ";
//         next = first + second;
//         first = second;
//         second = next;
//     }

//     return 0;

// }

int main() {

    int n;
    bool isPrime = true;
    
    cout << "Enter an integer: ";
    cin >> n; 

    if (n < 2) {
        cout << n << " isn't a prime number!";
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0 ) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        cout << n << " is a prime number!";
    } else {
        cout << n << " isn't a prime number!";
    }
    
    return 0;
}