#include<iostream>
#include<fstream>
using namespace std;
class Car{
    private:
        string brand,model,variant,features[10];
        int year,price,featureCount;
    public:
        void addCarDetails(string carbrand,string carmodel,string carvariant,int year,int price){
            brand = carbrand;
            model = carmodel;
            variant = carvariant;
            this-> year = year;
            this-> price = price;
        }
        void addCarFeatures(int count){
            featureCount = count; 
            cout << " Enter the:" << count << " feature of the car: " << endl;
            for(int i = 0; i < count; i++){
                cin.ignore();
                getline(cin,features[i]); // can enter multiple words along with the spaces
            }
        }  
        void storeCarDetails(){
            ofstream store("car_details.txt");
            store << " the car Details are as follows:" << endl;
            store << "  Car Brand: " << brand << endl;
            store << "  Car Model: " << model << endl;
            store << "  Car Variant: " << variant << endl;
            store << "  lunch year: " << year << endl;
            store << "  offer orice:Rs. " << price << endl;
            store << "  Car has these feauters: " << endl;
            for(int i = 0; i < featureCount; i++){
                store << "\t" << i+1 << ". " << features[i] << endl;
            }
            store << "---------------------------------------------";
        }
};
int main(){
    string car_brand, car_model,car_variant, car_features[10];
    int features_count, launch_year, launch_price;
    cout << "Enter the car Details: " << endl;
    cout << "Brand, Model, Variant, Launch Year, Launch Price: " << endl;
    cout << " Ex: Tata, Curvv, (Petrol/Diesal/ECV),2025,1500000 ";
    cin >> car_brand >> car_model >> car_variant >> launch_year >> launch_price;
    cout << "Enter the number of features: " << endl;
    cin >> features_count; 
    Car car1;
    car1.addCarDetails(car_brand, car_model,car_variant,launch_year,launch_price);
    car1.addCarFeatures(features_count);
    car1.storeCarDetails();
}                    
