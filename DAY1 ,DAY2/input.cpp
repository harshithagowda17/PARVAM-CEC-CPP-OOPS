#include<iostream>
using namespace std;
int main(){
    string first_name,college,branch;
    char sem;
    int age;
    cout << "Enter your name: ";
    cin >> first_name;
    cout << "Enter your college name in short-form: ";
    cin >> college;
    cout << "Enter your branch name in short-form: ";
    cin >> branch;
    cout << "Enter your age: ";
    cin >> age;
    cout << "enter your semester: ";
    cin >> sem;
    cout << "your name is " << first_name << ", you're college name " << college <<endl<< " your branch is " << branch << " age is " << age << " semester " << sem;
}