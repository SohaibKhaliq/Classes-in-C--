#include "iostream"
using namespace std;

class Person {
private:   // Sensitive / confidential information
    int id;
    string fathername;
    int age;
    double phone_no;
    double cnic;
    string address;
    float height;
    float weight;
    string dob;
    string marital_status;
    int siblings;
    string education;
    string bank_info;
    string email;

public:   // General / non-sensitive info + methods
    string name;
    string gender;
    string nationality;
    string religion;
    string birthmark;
    string speciality;
    string blood_group;

    // Methods to set/get private data safely
    void setID(int i) { id = i; }
    int getID() { return id; }

    void setPhone(double p) { phone_no = p; }
    double getPhone() { return phone_no; }

    void setCNIC(double c) { cnic = c; }
    double getCNIC() { return cnic; }

    void setEmail(string e) { email = e; }
    string getEmail() { return email; }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Religion: " << religion << endl;
        cout << "Blood Group: " << blood_group << endl;
    }
};

int main() {
    Person p;

    // Public data
    p.name = "Hamza";
    p.gender = "Male";
    p.nationality = "Pakistani";
    p.religion = "Islam";
    p.blood_group = "B+";

    // Private data (through setters)
    p.setID(101);
    p.setPhone(923001234567);
    p.setCNIC(3520212345678);
    p.setEmail("hamza@gmail.com");

    // Display some info
    p.displayInfo();
    cout << "ID: " << p.getID() << endl;
    cout << "Phone: " << p.getPhone() << endl;
    cout << "CNIC: " << p.getCNIC() << endl;
    cout << "Email: " << p.getEmail() << endl;

    return 0;
}
