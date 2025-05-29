#include<iostream>
using namespace std;
class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;
    public:
       void addDetails(string id, string name, int exp, float salary){
        employeeID = id;
        employeeName = name;
        experience = exp;
        this-> salary = salary;
    }
    void showDetails(){
        cout<< " The Employee with name: "<< employeeName << " bearing " << employeeID << " have " << experience << " years of experience and receives a salary of Rs. " << salary << " /- " << endl;
    }

};
int main(){
    string empName, empID;
    int empExp;
    float empSalary;
    cout<< " Enter your Name, Employee-ID, Years of Experience and Salary: ";
    cin>> empName >> empID >> empExp >> empSalary;
    Employee emp1; // Creating an object of the class
    Employee *empPtr = &emp1; // Creating a pointer to the object
    //Using the pointer we are assiging the value to the object using the pointer deferencing & Dot operator
    (*empPtr).addDetails(empID,empName, empExp, empSalary); 
    (*empPtr).showDetails();
    //or
    //Using the pointer we are assiging the value to the object using the pointer deferencing & Arrow operator
    empPtr->addDetails(empID,empName, empExp, empSalary); 
    empPtr->showDetails();
    Employee *ptrEmp = new Employee;
    // Dynamically allocating memory for an pointer object(no object referred)
    // syntax: className *pointer_name = new className
    ptrEmp->addDetails("PM123","Ajay",3,50000.00);
    ptrEmp->showDetails();
    // emp1.details <==> (*empPtr).addDetails <==> empPtr->addDetails
}