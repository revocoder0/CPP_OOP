# include <iostream>
#include <string>

using namespace std;

class Phone
{
    string phoneName;
    string phoneSize;

    public:
        Phone(string name, string size)
        {
            phoneName = name;
            phoneSize = size;
        }

        void makeCall(){
            cout<<"Making call using "<<phoneName<<endl;
        }
        void reciveCall(){
            cout<<"Reciving call using "<<phoneName<<endl;
        }
};

int main()
{
    Phone radmi19("Radmi19", "1000 x 500");
    radmi19.makeCall();
    radmi19.reciveCall();
    cout<<endl;
    Phone iphone("iphone", "1000 x 500");
    iphone.makeCall();
    iphone.reciveCall();
    return 0;
}