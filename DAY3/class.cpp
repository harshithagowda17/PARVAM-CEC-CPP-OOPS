#include<iostream>
using namespace std;
//syntax
//class class_name  //class Declaration
class student{
    public:
    string name,college,branch;   // Data
    int sem;
    void show()   //Member Function
    { 
        cout << "name: "<< name << endl;
        cout << "college: "<< college << endl;
        cout << "branch: "<< branch << endl;
        cout << "semester: "<< sem << endl;
    }
};
int main(){
    student student1;   //object cration
    student1.name = "Harshitha H";  //assigning the value to the class using object
    student1.college = "CEC"; 
    student1.branch = "AIML";  
    student1.sem = 2;  

    student1.show();

    student student2;   //object cration
    student2.name = "Nanditha C";  //assigning the value to the class using object
    student2.college = "CEC"; 
    student2.branch = "CSC";  
    student2.sem = 2; 

    student2.show();

}
