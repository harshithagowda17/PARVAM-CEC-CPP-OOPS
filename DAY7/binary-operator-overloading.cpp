#include<iostream>
using namespace std;
class Complex{
    int real,imaginary;  // Private Member
    public:
        Complex(){  // Default Constructor
            real =0;
            imaginary = 0;
        }
        Complex (int r,int i){  // Parameterized Constructor
            real = r;
            imaginary = i;
        }
        //Binary Operator Overloading
        Complex operator+(const Complex &c){
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            cout << " First Number: " << real << " + " << imaginary << "i" << endl;
            cout << " Second Number: " << c.real << " + " << c.imaginary << "i" << endl;
            return temp;
        }
         Complex operator-(const Complex &c){
            Complex temp;
            temp.real = real - c.real;
            temp.imaginary = imaginary - c.imaginary;
            cout << " First Number: " << real << " - " << imaginary << "i" << endl;
            cout << " Second Number: " << c.real << " - " << c.imaginary << "i" << endl;
            return temp;
         }
        void showSum(){
            cout<< " Sum of 2 complex numbers is: " << real<< " + "<< imaginary << " i " << endl;
        }
        void showDifference(){
            cout<< " Difference of 2 complex numbers is: " << real<< " - "<< imaginary << " i " << endl;
        }
};
int main(){
    int r1,r2,i1,i2;
    cout << " Enter the first complex number(real number & imaginary number: eg. 5 + 3i): " << endl;
    cin >> r1 >> i1;
    cout << " Enter the second complex number(real number & imaginary number: eg. 10 + 6i): " << endl;
    cin >> r2 >> i2;
    Complex c1(r1,i1);
    Complex c2(r2,i2);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    cout << " First complex number is: " << r1 << " + " << i1 << " i " << endl;
    cout << " Second complex number is: " << r2 << " + " << i2 << " i " << endl;
    sum.showSum();
    diff.showDifference();
}