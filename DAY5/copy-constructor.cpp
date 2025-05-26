#include<iostream>
using namespace std;
class Teacher{
    private:   // by default all the data members of the class comes under private acces specifier
    string branch;
    public:
    string name,qualification;
    int experience;
    Teacher(){   // default constructor
        branch = "AIML";
        name = "Akshay";
        qualification = "B.Tech";
        experience = 5;
        cout << " Welcome Akshay! " << endl;
    }
     void setData(string Tname,string Tbranch,string Tqual,int exp){   // SETTER
        name = Tname;
        branch = Tbranch;
        qualification = Tqual;
        experience = exp;
    }
    Teacher(string Teachername,string Teacherbranch, string Teacherqual,int Teacherexp){   // parmetrized constructor   
        setData(Teachername,Teacherbranch,Teacherqual,Teacherexp);
        cout << " Welcome, " << name << " to " << branch << "." << endl;
        cout << " You've Graduated with ," << qualification << " Degree. And You've "<< experience << "Years of Experience" << endl;
    }
     // SYNTAX FOR COPY CONSTRUCTOR : CONSTRUCTOTR(REFERENCE-VCONSTRUCTOR ADDRESS -OF-THE-OBJECT )
    Teacher(Teacher & t){   // COPY CONSTRUCTOR
        name =  t.name ;
        branch =  t.branch ;
        qualification =  t.qualification ;
        experience =  t.experience;
    } 
    void getData(){  //getter
        cout << " Welcome, " << name << " to " << branch << "." << endl;
        cout << " You've Graduated with ," << qualification << " Degree. And You've "<< experience << "Years of Experience" << endl;
    }
    ~Teacher(){
        cout << "object work is done,clearing memory!"  << endl;
    }

}; int main(){  //destructor
    string n,q,b;
    int e;
    Teacher teacher1;  // object created & invoked the default constructor
    cout<< " Enter your name,Qualification,branch and experience: ";
    cin>> n >> b >> q >> e; 
    Teacher teacher2(n,b,q,e);  // object created & invoked the parameterized constructor 
    Teacher teacher3 = teacher2;  // object created & invoked the copy constructor
    teacher3.getData();
}