#include <iostream>
using namespace std;

int main () {
    int n[5];

    for (int i=0 ; i < 5 ; i++) {
        cout << "Enter number " << i + 1 << " :" ; 
        cin >> n[i];
    }
    for (int i=0;i<5;i++) {
        cout << n[i];
    }
    return 0;
}