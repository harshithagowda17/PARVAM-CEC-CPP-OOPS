#include<iostream>
using namespace std;
class Vehical{  //Base class
    private:
        string riding_mode;
    public:
    void setMode(string mode){
        riding_mode = mode;
    }
    string useMode(){
        return riding_mode;
    }
};
class Bike : public Vehical{  // Derived class can access the data & member function of base class(via public)
    private:
        string brand;
    public:
        void setName(string name){
            brand = name;
        }
        string showName(){
            return brand;
        }
};
int main(){
    string mode_of_transport,brand_name;
    cout << " Enter the Mode of Transport & Brand Name of your Bike: ";
    cin >> mode_of_transport >> brand_name;
    Bike bike1;   // object of derived class
    bike1.setMode(mode_of_transport);  // accessing the member function of base class(inheriting the proprties)
    bike1.setName(brand_name);
    cout << " I've a " << bike1.showName() << " bike, I can travel to my native via " << bike1.useMode();
}

