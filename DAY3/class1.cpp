#include<iostream>
using namespace std;
class Car{
    //Data 
    public:
    string brand,model,variant,fuel_type;
    int year;
    int price;
    //Member Function
    void start(){
        cout << model << " started!" << endl;
    }
    void park(){
        cout << model << " parked!" << endl;
    }
    void stop(){
        cout << model << " stopped!" << endl;
    }
     void display(){
        cout << " brand: " << brand << endl;
        cout << " model: " << model << endl;
        cout << " variant: " << variant << endl;
        cout << " fuel type: " << fuel_type << endl;
        cout << " launch year: " << year << endl;
        cout << " price: " << price << endl;
    }


};
int main(){
    Car c1; //object created for the class car
    c1.brand = "Toyota";
    c1.model = "Innova";
    c1.variant = "6 seater";
    c1.fuel_type = "diesel";
    c1.year = 2024;
    c1.price = 1500000;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
}