#include <iostream>
using namespace std;

// int main() {
//     int n[]={12,3,45,7,22};

//     int min =n[0];
//     int max =n[0];
//     for (int i =0;i <5;i++) {
//         if (n[i] < min) {
//             min = n[i];
//         }   
//         if (n[i] > max) {
//             max = n[i];
//         }
//     }
//     cout << min << " is the minimum. " << endl;
//     cout << max <<" is the maximum. " << endl;
//     return 0;
// }

// int main () {
//     int n[]={1,2,3,4,5};

//     for (int i=4;i>=0;i--) {
//         cout << n[i] << " ";
//     }
//     return 0;
// }

// int main() {
//     int k=3;
//     int n[]={1,2,3,4,5,6,7};
//         //   0,1,2,3,4,5,6
//     int l= 7-k; //0,1,2,3,4,5,6
//     int r= 0;

//     for (int i=l; i <= 6; i++) {
//         cout << n[i];
//     }
//     for (int i=r; i <=k;i++ ) {
//         cout << n[i];
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n" << endl;
//     cin >> n;


//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main () {
//     int sum = 1;
//     for (int i=1; i <= 5;i++) { // prints number 1-5 per row
//         for (int j=1; j <= 5;j++) { // each row multiply ex: row 1*1, 2*2....
//             cout << i*j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main () {

    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i=n;i >= 1 ;i--) { //goes from column each row 4 to 1 throughout all the rows
        for (int j=1; j <= i;j++) { // prints all the rows
            cout << j;
        }
        cout << endl;
    }
    return 0;
}