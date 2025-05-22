#include<iostream>
using namespace std;
void sayHello(){  // function declaration
    cout << "Hello!"  <<endl;   // function defination
}
int sayHi(string fname){
    cout << " Hi! " << fname << endl;
}
int greet(string fname,string lname,int age){
    cout << " Hi! " << fname << " " << lname << ", age: "<< age << endl;
}
int main(){
    string firstName,friendName,lastName;
    int age; 
    cout << " enter your first name:";  //function call
    cin >> firstName;
     cout << " enter your last name:";
    cin >> lastName;
    cout << " enter your age:";
    cin >> age;
    cout << " enter your friend name:";
    cin >> friendName;
    sayHello();
    sayHi(firstName);
    sayHi(friendName); 
    greet(firstName,lastName,age);
}