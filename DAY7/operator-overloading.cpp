#include<iostream>
using namespace std;
class Increment{
    private:
    int number,value,value1;
    public:
        void setNumber(int num){
        number = num;
        }
        //syntax for operator overloading:
        //return_type operator symbol(parameter){ parameter is optional}
        //unary operator overloading
        void operator ++(){
            value = number + 5;
        }
        void operator --(){
            value1 = number - 5;
        }
        void showValue(){
            cout << " Before Incrementating: " << number << endl;
            cout << " After Incrementating: " << value << endl;
            cout << " Before Decrementing: " << number << endl;
            cout << " After Decrementing: " << value1 << endl;
        }
};
int main(){
    int n;
    cout << " Enter any number for Incrementing & Decrementing its value by 1: ";
    cin >> n;
    Increment num1;
    num1.setNumber(n);
    ++num1;
    --num1;
    num1.showValue();
    cout << " Number after Incrementing: " << ++n << endl;
    cout << " Number after Decrementation: " << --n << endl;
}