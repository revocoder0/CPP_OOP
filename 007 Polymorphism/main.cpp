#include <iostream>

using namespace std;

class Animal
{
    public:
        void speed(){
            cout<<"Who is more faster\n";
        }
};

class Cheetah:public Animal
{
    public:
        void speed(){
            cout<<"Cheetah say i'm Faster.\n";
        }
};

class Dolphin:public Animal
{
    public:
        void speed(){
            cout<<"Dolphin say i'm Faster.\n";
        }
};

int main()
{
    Animal a;
    Cheetah c;
    Dolphin d;

    a.speed();
    c.speed();
    d.speed();
    return 0;
}