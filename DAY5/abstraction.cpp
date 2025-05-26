#include<iostream>
using namespace std;
class Bike{
    public:
    string brand,model,engine_type;
    int year,price;
    void injectFuel(){
        cout<<" Inject the Fuel-Petrol! " << endl;
    }
     void igniteFuel(){  // Internal Data-hidden
        cout<<"Ignit the Fuel! "<< endl;
    }
    void start(string bikeModel){
        injectFuel();   //Abstraction
        igniteFuel();   //Abstraction
        cout <<  model << "Started,HAPPY JORNEY! " <<endl;
    }
    void stopAcceleration(){  // Internal Data-hidden
        cout<<" Acceleration stopped! " << endl;
    }
    void stopFuelFlow(){  // Internal Data-hidden
        cout<<" Fuel flow stopped! " << endl;
    }
    void stop(){
        stopAcceleration();  //Abstraction
        stopFuelFlow();   //Abstraction
        cout << model << " stopped, Lock the Vehicle! " << endl;
    }
};
int main(){
    Bike bike1;
    bike1.brand = "ROYAL ENFIELD";
    bike1.model = "GT 650";
    bike1.engine_type = "Double Engine";
    bike1.year = 2017;
    bike1.price = 343000;
    bike1.start(bike1.model);
    bike1.stop();
}