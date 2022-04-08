#include <iostream>

using namespace std;

struct database
{
    int id_no, age;
    string name;
    int salary;
    string address;
};

int main()
{
    database empelooy;

    empelooy.id_no = 001;
    empelooy.name = "Kyaw Soe Hal";
    empelooy.age= 23;
    empelooy.salary = 2000000;
    empelooy.address = "Kyauk Phyu";
    cout << "\tEmpelooy"<<endl<<endl;
    cout<<"No\t"<<empelooy.id_no<<endl;
    cout<<"Age\t"<<empelooy.age<<endl;
    cout<<"Name\t"<<empelooy.name<<endl;
    cout<<"Salary\t"<<empelooy.salary<<endl;
    cout<<"Address\t"<<empelooy.address<<endl;

    return 0;
}
