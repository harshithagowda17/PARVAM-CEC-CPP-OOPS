#include<iostream>
using namespace std;
class Wish{
    private:
    string name;
    int age;
    public:
    Wish(){  // default constructor
        name = " kannan ";
        age = 18;
    }
        Wish(string n, int a);  // parameterized constructor    
        void birthdayWishes(); // function declaration
    };
    // defining the rules of parameterized constructor outside the class using the scope resolution operator
Wish :: Wish(string n, int a){   // syntax: classname :: constructor (parameter) (no enter type required)
    name = n;
    age = a;
}
 // defining the member function outside the class // syntax:return_type classname :: member_function (parameter) // return type is must
    void Wish :: birthdayWishes(){ // function definition
        cout << " Happy Birthday " << name << " ! Now you're " << age << " years old." << endl;
    }
int main(){
    string personName;
    int personAge;
    Wish person1;
    person1.birthdayWishes();
    cout << "Enter your name: ";
    cin >> personName;
    cout << "Enter your age: ";
    cin >> personAge;
    Wish person2(personName, personAge);
    person2.birthdayWishes();
}