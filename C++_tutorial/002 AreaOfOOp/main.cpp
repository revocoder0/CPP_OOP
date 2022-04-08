#include <iostream>

using namespace std;

class Rectangle
{
    int width, height;
    public:
        void set_values(int , int);
        int area()
        {
            return width*height;
        }
};
void Rectangle::set_values(int a, int b)
{
    width= a;
    height = b;
}

int main()
{
    Rectangle rect,recb;
    rect.set_values(3,4);
    recb.set_values(3,10);
    cout<<"Area : "<<rect.area()<<endl;
    cout<<"Area : "<<recb.area()<<endl;
    return 0;
}
