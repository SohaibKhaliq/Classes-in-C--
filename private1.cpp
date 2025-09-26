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

    string getname()
    {
        return name;
    }

    void setname(string animal_name)
    {
        name=animal_name;
    }

    private:
    string name;
    string color;
    int age;

};

int main()
{
    animal cow;
    cow.setname("wooly");
    cout << cow.getname();
}