#include<iostream>
using namespace std;
class bank{
    private:
    int balance=0;
    public:
    // Member data of the class
    string custName,custEmail;
    int acNumber;
    void createAccount(string cName, string cEmail){
        custName = cName;
        custEmail = cEmail;
    }
    void displayInfo(){
        cout << "Customer Name: " << custName << endl;
        cout << "Customer Email: " << custEmail << endl;
    }
    // setter
    void addBalance(int account,int amount ){
        balance += amount;
        cout << " the amount has been deposited successfully!" <<endl;
    }
     // setter
    void withdrawAmount(int account,int amount){
        if(amount <= balance){
            balance -= amount;
            cout << " the amount has been withdrawn successfully!" << endl;
        }
        else{
            cout << "Insufficient balance! Cannot Withdraw" << endl;
        }
    }
    // getter
    void checkBalance(){
        cout << "Bank Balance:" << balance << endl;
    }
};
int main(){
    bank cust1; //object declared
    string name,email;
    int acNumber,amount;  
    cust1.custName = "Harshitha H";
    cust1.custEmail = "harshithaGowda@gmail.com";
    cust1.acNumber = 987654321;
    cout << "WELCOME TO STATE BANK OF INDIA" << endl;
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your email id:";
    cin >> email;
    cout << "Enter your account number:";
    cin >> acNumber;
    cout << "Enter the amount to be deposited:";
    cin >> amount;
    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNumber,amount);
    cust1.checkBalance();
    cout << "enter the amount to be wuthdraw:";
    cin >> amount;
    cust1.withdrawAmount(acNumber,amount);
    cust1.checkBalance();
    cout << "------THANK YOU FOR BANKING WITH US------" ;
}
