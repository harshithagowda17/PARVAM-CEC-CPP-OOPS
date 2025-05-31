#include <iostream>
#include <fstream>
using namespace std;

class GateRegistration {
private:
    char name[50];
    char dob[15];
    char gender[10];
    char category[10];
    char mobile[15];
    char email[50];
    char degree[20];
    char branch[20];
    char year[10];
    char paper[10];

public:
    void getDetails() {
        cout << "Enter Full Name: ";
        cin.ignore(); 
        cin.getline(name, 50);

        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        cin.getline(dob, 15);

        cout << "Enter Gender: ";
        cin.getline(gender, 10);

        cout << "Enter Category (GEN/OBC/SC/ST): ";
        cin.getline(category, 10);

        cout << "Enter Mobile Number: ";
        cin.getline(mobile, 15);

        cout << "Enter Email: ";
        cin.getline(email, 50);

        cout << "Enter Degree (e.g. B.Tech): ";
        cin.getline(degree, 20);

        cout << "Enter Branch: ";
        cin.getline(branch, 20);

        cout << "Enter Year of Passing: ";
        cin.getline(year, 10);

        cout << "Enter GATE Paper: ";
        cin.getline(paper, 10);
    }

    void saveToFile() {
        ofstream file("gate_data.txt", ios::app); // Open in append mode
        file << "------------------------------\n";
        file << "Name: " << name << "\n";
        file << "DOB: " << dob << "\n";
        file << "Gender: " << gender << "\n";
        file << "Category: " << category << "\n";
        file << "Mobile: " << mobile << "\n";
        file << "Email: " << email << "\n";
        file << "Degree: " << degree << "\n";
        file << "Branch: " << branch << "\n";
        file << "Year: " << year << "\n";
        file << "GATE Paper: " << paper << "\n";
        file << "------------------------------\n";
        file.close();
        cout << "\n Registration saved successfully!\n";
    }
};

int main() {
    GateRegistration student;
    student.getDetails();
    student.saveToFile();

    return 0;
}