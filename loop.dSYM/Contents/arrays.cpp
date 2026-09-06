#include <iostream>
using namespace std;

int main () {
    
    int input[] = {4,8,15,16,23,42};
    int sum=0;

    for (int i=0; i <=5 ;i++) {
        sum +=input[i];
    }
    cout << sum;

    return 0;

}