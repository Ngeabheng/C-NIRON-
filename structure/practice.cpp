#include <iostream>
using namespace std;

struct Student {
        string name;
        int age;
        double GPA;
    };

int main () {

    Student Student[5];
    int i=0 ;
    while (i<=4) {
        cout << "Student " << i + 1<< endl;
        cout << "Name: ";
        cin >> Student[i].name;

        cout << "Age: ";
        cin>> Student[i].age;

        cout << "GPA: ";
        cin>> Student[i].GPA;

        i++;
    }

    cout << "=====================================" << endl;
    cout << "Student 1" << endl;
    cout << "Name: " << Student[0].name << endl;
    cout << "Age: " << Student[0].age << endl;
    cout << "GPA: " << Student [0].GPA <<endl;
    cout << " " << endl;
    cout << "Student 2" << endl;
    cout << "Name: " << Student[1].name << endl;
    cout << "Age: " << Student[1].age << endl;
    cout << "GPA: " << Student [1].GPA <<endl;
    cout << " " << endl;
    cout << "Student 3" << endl;
    cout << "Name: " << Student[2].name << endl;
    cout << "Age: " << Student[2].age << endl;
    cout << "GPA: " << Student[2].GPA <<endl;
    cout << " " << endl;
    cout << "Student 4" << endl;
    cout << "Name: " << Student[3].name << endl;
    cout << "Age: " << Student[3].age << endl;
    cout << "GPA: " << Student[3].GPA <<endl;
    cout << " " << endl;
    cout << "Student 5" << endl;
    cout << "Name: " << Student[4].name << endl;
    cout << "Age: " << Student[4].age << endl;
    cout << "GPA: " << Student[4].GPA <<endl;
    cout << " " << endl;

    return 0;

}
