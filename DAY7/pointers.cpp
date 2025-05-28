#include<iostream>
using namespace std;
int main(){
    int a;
    // syntax for declaring the pointer:
    //data type * pointer name;
    // data type of pointer is same as reference variable
    // assign the address to the pointer : & variable name;
    // * refers to the pointer variable
    // & refers to the address of the variable
    // ptr refers to the address of the pointer
    // *ptr refers to the value of the pointer
    int *ptr = &a;
    float decimal;
    float *f = &decimal;
    cout << " Enter the value of a: ";
    cin >> a;
    cout << " Enter the decimal value: ";
    cin >> decimal;
    cout << " Value of a: " << a << endl;
    cout << " Address of a: " << &a << endl;
    cout << " Value of pointer(ptr): " << ptr << endl;
    cout << " Address of ptr: " << &ptr << endl;
    cout << " Value pointed ptr: " << *ptr << endl;

    cout << " Value of decimal: " << decimal << endl;
    cout << " Address of decimal: " << &decimal << endl;
    cout << " Value of pointer(f): " << f << endl;
    cout << " Address of ptr: " << &f << endl;
    cout << " Value pointed ptr: " << *f << endl;
}