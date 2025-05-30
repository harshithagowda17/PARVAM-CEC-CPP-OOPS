#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //writing in the file
    ofstream out ("sample.txt ");
    string name;
    int age;
    cout<<" Enter your name and age: ";
    cin>> name>> age;
    out<< "Hello " <<  name << "!" << endl;
    out<< "You are " << age << " years old." << endl;
    out.close();
    
    ifstream read("abd.txt");
    string line;
    getline(read, line);
    cout << " file contains: " << line << endl;
    while (getline(read, line)) {
    {
        cout << line << endl;
    }
    read.close();
    }
}