#include "iostream"

using namespace std;

class animal{
    public:
    animal(){
        cout << "Constructor is Called" <<endl;
    }

    ~animal()
    {
        cout << "Destructor is Called!" << endl;
    }

    string name;
    string color;
    int age;

};

int main()
{
    animal cow;
    cout << cow.name;
    animal sheep[5];
    cout << sheep[0].name;
}