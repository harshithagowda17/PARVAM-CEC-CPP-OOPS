#include<iostream>
using namespace std;
class Customer{
    public:
    string firstName,lastName;
    int age,rating;
     // intialize the constructor
     Customer(){
        firstName = "Harshitha";
        lastName = "Gowda";
        age = 18;
        rating = 5;
     }
     void showDetails(){
        cout << "Customer Name: " << firstName << " " << lastName << endl;     
        cout << " Customer Age: " << age << endl;
     }
     void giveRating(int rate); // declare the member function
     void showRating( ){
     cout << "You've given " << rating << " star rating. Thank You!" << endl;
     }
    
}; 
    // scope resolution operator
    void Customer :: giveRating(int rate){  // define the member function
        rating = rate;
    }
    int main(){
        Customer cust1; // invoked the constructor to assign the default value
        cust1.showDetails();
        cust1.showRating();
        Customer cust2;
        cust2.firstName = "Harshitha";
        cust2.lastName = "Gowda";
        cust2.age = 18;
        int startRating;
        cout << " Give your Rating(0 to 5): ";
        cin >> startRating;
        cust2.showDetails();
        cust2.giveRating(startRating);
        cust2.showRating();
    }