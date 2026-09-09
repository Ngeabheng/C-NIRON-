#include <iostream>
using namespace std;

// int main() {
//        int secret = 2;
//        int n;


//         while ( n != secret) {
//             cout << "Guess: ";
//             cin >> n;
//             if (n == secret) {
//                 cout << "Correct!";
//                 break;
//             }
//             else if ( n < secret) {
//                 cout << "Too low!" << endl;
//             } else if (n > secret) {
//                 cout << "Too high!"<< endl;
//             }
//         }
//     return 0;
// }

// int main () {
//     int e = 4;
//     int choice;

//     while (choice != e) {
//         cout << "===== ATM =====" << endl;
//         cout << "1. Check Balance" << endl;
//         cout << "2. Deposit" << endl;
//         cout << "3. Withdraw" << endl;
//         cout << "4. Exit" << endl;
//         cout << "" << endl;

//         cout << "Choose: ";
//         cin >> choice;        
//         if (choice == e) {
//             cout << "Ended. ";
//             break;
//         }
//     }   
//     return 0;
// }

// int main () {
//     int n;
//     int largest, smallest;
//     int i = 0;
//     int sum = 0;
    
//     while (n != -1) {
//         cout << "Enter Number: ";
//         cin >> n;
        
//         if ( n == -1 ) {
//             break;
//         }
//         i++;
//         sum = sum +n;

//         if (i == 1) {
//             largest = n;
//             smallest = n;
//         } else {
//             if (n > largest) {
//                 largest = n;
//             }
//             if (n < smallest) {
//                 smallest = n;
//             }
//         }

//         }
//         cout << "Count: " << i << endl;

//         cout << "Sum: " << sum << endl;

//         double avg = sum/i ;
//         cout << "Average: " << avg << endl;

//         cout << "Smallest: " << smallest << endl;

//         cout << "Largest: " << largest << endl;


//     }

int main () {
    string inputu;
    int inputp;
    int password = 1234567;
    string username = "admin";

    for (int i=0 ; i <=2; i++) {
        cout << "Username: ";
        cin >> inputu;
        cout << "Password: ";
        cin >> inputp;
   
        if (inputu == username && inputp == password) {
            cout << "Login Successful.";
            break;
        }   else {
            cout << "Incorrect!" << endl;
            cout << " " << endl;
        }
    }
}
    
