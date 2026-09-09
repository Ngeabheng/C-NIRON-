#include <iostream>
using namespace std;

int main() {
    int array[5] = {};
    
    for (int i=0; i<=4;i++) {
        cout << "Enter number " << i +1 << " :";
        cin >> array[i];
    }
    cout << "Your Numbers are" << endl;

    for (int i=0; i<=4; i++) {
        cout << array[i] << " ";
    }
    return 0;
}