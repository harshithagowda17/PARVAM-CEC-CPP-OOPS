#include<iostream>
using namespace std;
class Parent {  //Base Class
    private:
    int net_worth = 0;
    public:
    string family_name,family_head;
    int number_of_members;
    void setData(int worth,string familyName,string familyHead,int member_count){
        net_worth = worth;
        family_name = familyName;
        family_head = familyHead;
        number_of_members = member_count;
    }
    int showNetWorth(){  //getter
        return net_worth;
    }

    int getFamilyInfo(){   //getter
        cout << "Im from" << family_name
        << "family and my family head is" << family_head << " our family net worth is about" << showNetWorth() << endl;
    }
};
//syntax  for declaring the derived class:
//class derived-class-name: accessibility-mode base-class-name
//1) by default : derived clasaes uses private accessibilty mode
//2) if derived class used private accessibility mode then base class public data & member function of the base class will become private
//3) if derived class used public accessibility mode then base class public data & member function of the base class will remain public
// Class Child : Parent{ //Derived Class (By default private)
// Class Child : public Parent{ //Derived Class (private - accessibility-mode)
class Child: public Parent {  //Derived Class (public - accessibility-mode)
    public:
    string member_name;
    int age;
    void addDetails(string name,int person_age){   //Member function
        member_name = name;
        age = person_age;
    }
    void getFamilyDetails(){  //Member function
        cout<<" My name is: "<< member_name<< " and I'm " << age << "years old." ;
        getFamilyInfo();  //Inheriting the prperties of Base Class
    }
};
    int main(){
        string fName,fHead,cName;
        int childAge,fWorth,fMembers;
        cout<<" Enter family name,family head, number of members& net worth: ";
        cin>> fName >> fHead >> fMembers >> fWorth;
        Parent p1;
        p1.setData(fWorth,fName,fHead,fMembers);
        p1.getFamilyInfo();
        cout<<" Enter your name and age: ";
        cin>> cName >> childAge; 
        Child c1;
        // c1.family_head;( as child class is derived with public - accesibility moded
        // we can directly access the public data of the base class)
        c1.setData(fWorth,fName,fHead,fMembers);
        c1.addDetails(cName,childAge);
        c1.getFamilyDetails();
    }
