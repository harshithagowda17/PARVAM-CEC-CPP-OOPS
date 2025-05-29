#include<iostream>
using namespace std;
class Employee{  //base class
    private:
        string employeeID, employeeName;
        int experience,skillCount;
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
class Skill: public Employee{  //derived class
    private:
    int skillCount;
    string skills[10];  //normal array
    public:
    void SetSkills(int count){
        skillCount = count;
        cout << " Enter the " << count << " technologies you're familiar with: " << endl;
        for(int i = 0; i< count; i++){  //arrat initialization
            cout << " Skill " << i + 1 << ": ";
            cin >> skills[i];
        }
    }
    void showSkills(){
        cout << " Skills known: " << endl;
        for(int i = 0; i < skillCount; i++){  // display the content of skill array
            cout << i+1 << ". g++ pointer-array-object.cpp" << skills[i] << endl;
        }
    }

};
int main(){
    string emp_name,emp_id;
    int emp_exp,skill_count;
    float emp_salary;
    cout << " Enter the following details of the employee: " << endl;
    cout << " Employee ID,Name,Years of Experience and Salary: ";
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;
    // pointer referring to the object s1 of skill class which can also inherit the properties of Employee class
    Skill s1;
    Skill *emp1 = &s1; //pointer object - *emp1

    emp1->addDetails(emp_id, emp_name,emp_exp,emp_salary);
    
    cout << " Enter the number of technologies you know: ";
    cin >> skill_count; 
    emp1->SetSkills(skill_count);
    emp1->showDetails();
    emp1->showSkills();
    
}

