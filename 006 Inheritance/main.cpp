#include <iostream>

using namespace std;

class Parent
{
    public:
        string nameOne = "Than Zaw";
};

class Child: public Parent
{
    public:
        string nameTwo = "Aou";
};

int main()
{
    Child ch;
    cout<<ch.nameOne + " " +ch.nameTwo;
    return 0;
}