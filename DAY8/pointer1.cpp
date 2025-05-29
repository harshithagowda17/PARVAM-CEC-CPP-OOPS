#include<iostream>
using namespace std;
int main() {
    int age;
    int *ptrAge = &age;   //address reference of age(pointer Referencing)
    string name;
    string *nameptr = &name;
    cout << "Enter your name and age: ";
    cin >> name >> age;
    // *ptrAge & *nameptr - pointer Deferencing
    cout << "Your name is " << (*nameptr) << " ,You're " << (*ptrAge) << " Years old, " << endl;
    cout << " The Address of name is stored in pointer(nameptr): " << nameptr << endl;
    cout << " The Address of age is stored in pointer(ptrAge): " << ptrAge << endl;
    int *num1 = new int(5);  //Dynamic Memory Allocation
    // The reference variable is not needed for assiging the address to the pointer we can use new keyword
    cout << " The value within the pointer num1: " << (*num1);
    int size;
    int *arr = new int[size]; //Dynamic Memory Allocation for integer array(run-time)
    cout << " Enter the size of the array: ";
    cin >> size;
    cout << " Enter the " << size << " elements of the array: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << " The array contains " << size << " elements: " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    }
}