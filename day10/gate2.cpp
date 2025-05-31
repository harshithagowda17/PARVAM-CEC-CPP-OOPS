#include <iostream>
#include <fstream>
using namespace std;

class GateRegistration {
private:
    string name, dob, gender, category;
    string mobile, email, degree, branch;
    string year, paper;

public:
    void getDetails() {
        cout << "Enter Full Name: ";
        getline(cin, name);

        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        getline(cin, dob);

        cout << "Enter Gender: ";
        getline(cin, gender);

        cout << "Enter Category (GEN/OBC/SC/ST): ";
        getline(cin, category);

        cout << "Enter Mobile Number: ";
        getline(cin, mobile);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "Enter Degree (e.g. B.Tech): ";
        getline(cin, degree);

        cout << "Enter Branch: ";
        getline(cin, branch);

        cout << "Enter Year of Passing: ";
        getline(cin, year);

        cout << "Enter GATE Paper: ";
        getline(cin, paper);
    }

    void saveToFile() {
        ofstream file("gate2_data.txt", ios::app); // Open in append mode
        file << "------------------------------\n";
        file << "Name: " << name << endl;
        file << "DOB: " << dob << endl;
        file << "Gender: " << gender << endl;
        file << "Category: " << category << endl;
        file << "Mobile: " << mobile << endl;
        file << "Email: " << email << endl;
        file << "Degree: " << degree << endl;
        file << "Branch: " << branch << endl;
        file << "Year: " << year << endl;
        file << "GATE Paper: " << paper << endl;
        file << "------------------------------\n";
        file.close();
        cout << "\nRegistration saved successfully!\n";
    }
};

int main() {
    GateRegistration student;
    student.getDetails();
    student.saveToFile();

    return 0;
}