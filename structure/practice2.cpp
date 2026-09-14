#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    double GPA;
};

int main () {

    Student student;

    cout << "Enter student name: ";
    cin >> student.name;

    cout << "Enter student age: ";
    cin >> student.age;

    cout << "Enter student GPA: ";
    cin >> student.GPA;

    cout << " " << endl;
    cout << "=== Student information ===" << endl;
    cout << "Name: "<< student.name << endl;
    cout << "Age: "<< student.age << endl;
    cout << "GPA: "<< student.GPA << endl;
    
    return 0;
}