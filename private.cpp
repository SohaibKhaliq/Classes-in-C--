#include "iostream"

using namespace std;

class Person
{
private:
    string fathername;
    int age;
    double phone_no;
    double cnic;
    string address;
    float height;
    float weight;
    string marital_status;
    int siblings;
    string education;
    string bank_info;
    string email;
    string birthmark;

public:
    Person()
    {
        cout << "Constructor is Called" <<endl;
        name="sohaib";
        blood_group="A+";
    }
    int id;
    string name;
    string speciality;
    string blood_group;
    string nationality;
    string religion;
    string gender;
    string dob;
};

int main()
{
    Person p1;
    cout << p1.name << endl;
    cout << p1.blood_group;
    Person p2;
    Person p3;
    Person p4;
}