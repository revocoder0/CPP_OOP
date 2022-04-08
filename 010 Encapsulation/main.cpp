#include<iostream>

using namespace std;

class Encapsulation
{
    private:
        int x;
    public:
        void set(int a)
        {
            x = a;
        }
        int get()
        {
            return x;
        }
};  
int main()
{
    Encapsulation en;
    en.set(100);
    cout<<en.get();
    return 0;
}