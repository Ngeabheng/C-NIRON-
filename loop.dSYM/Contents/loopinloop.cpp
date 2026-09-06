#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j=1; j<=5; j++) {
            int result = j * i;
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}