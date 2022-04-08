#include <iostream>

using namespace std;

class ImplementAstraction
{
    private:
        int a, b;
    public:
        void set(int x, int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"Number of A is : "<<a<<endl;
            cout<<"Number of B is : "<<b<<endl;
        }
};

int main()
{
    ImplementAstraction ima;
    ima.set(20,40);
    ima.display();
    return 0;
}