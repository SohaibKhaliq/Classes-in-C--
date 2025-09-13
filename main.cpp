#include <iostream>

using namespace std;

class Car
{
public:
    int no_of_wheels;
    string name;
    string color;
    string model;
    int no_of_seats;

    void hello()
    {
        cout << "hello";
    }
};

int main()
{
    Car toyota_corolla;
    toyota_corolla.name = "Corrolla";
    toyota_corolla.color="Black";
    toyota_corolla.model="2025";
    toyota_corolla.no_of_seats=4;
    toyota_corolla.no_of_wheels=4;

    toyota_corolla.hello();
    cout << toyota_corolla.name << endl;
    cout << toyota_corolla.color << endl;
    cout << toyota_corolla.model << endl;
    cout << toyota_corolla.no_of_seats << endl;
    cout << toyota_corolla.no_of_wheels << endl;
    return 0;
}