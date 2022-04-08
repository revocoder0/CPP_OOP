#include <iostream>

using namespace std;

class HumanName
{
public:
    string name;

    void display()
    {
        cout<<"Hello, "<<name<<endl;
    }
};

int main()
{
    HumanName a;
    HumanName *b = new HumanName();

    a.name = "Than Zaw Aou";
    a.display();

    b->name = "Kyaw Soe Hla";
    b->display();
    return 0;
}
