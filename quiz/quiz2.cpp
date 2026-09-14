#include <iostream>
using namespace std;

int main() {
    int n[10]={};

    int even = 0, odd=0;
    int sum = 0;
    for (int i=0;i<10;i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> n[i];
        if (n[i]%2 == 0) {
            even++;
            sum = sum + n[i];
        } 
        if (n[i]%2 == 1) {
            odd++;
        }
    }   
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Sum: " << sum << endl;
    return 0;

}