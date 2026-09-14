#include <iostream>
using namespace std;

int main () {
    int score[10]={};
    
    int pass=0,fail=0;
    int min, max;

    for (int i=0;i<10;i++) {
        cout << "Enter score for student " << i + 1<< ": ";
        cin >> score[i];

        if (score[i]>=50) {
            pass++;
        }
        if (score[i]<50) {
            fail++;
        }
        if (i==0) {
            max = score[0];
            min = score[0];
        }
        if (score[i]<min) {
            min=score[i];
        }
        if (score[i]>max) {
            max = score[i];
        }
    }
    cout << "Passed: "<< pass << endl;
    cout << "Failed: " << fail << endl;
    cout << "Highest: " << max << endl;
    cout << "Lowest: "<< min << endl;
    return 0;
}