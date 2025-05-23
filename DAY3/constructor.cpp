#include<iostream>
using namespace std;
class Calculate{
    public:
    // member data
    int num1,num2;
    float res;
    // Declared the constructor & it is also a default constructor
    Calculate(){ 
        num1=5;
        num2=10;
    }
    // member function
    void showOutput(){
        cout <<" Addition: " << num1 + num2 << endl;
        cout <<" Substraction: " << num1 - num2 << endl;
        cout <<" Multiplication: " << num1 * num2 << endl;
        cout <<" Quotient: " << num2 / num1 << endl;
        cout <<" Remainder: " << num2 % num1 << endl;
    }
};
int main(){
    // intialize the default value using constructor automatically when object is declared
    Calculate c1; // object
    Calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    cout << "------------------" <<endl;
    c2.showOutput();
}
