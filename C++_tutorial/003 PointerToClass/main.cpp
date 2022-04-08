#include <iostream>

using namespace std;

class Rectangle{
    int width, height;
public :
    Rectangle(int x, int y) : width(x), height(y){}
    int area(void)
    {
        return width * height;
    }
};
int main()
{
    Rectangle obj(3,4);
    Rectangle * foo, * bar, * baz;
    foo = &obj;
    bar = new Rectangle(12,10);
    baz = new Rectangle [2] {{2,5}, {3,6} };

    cout<<"Obj's Area " << obj.area()<<endl;
    cout<<"* Foo's Area " << foo->area()<<endl;
    cout<<"* Bar's Area " << bar->area()<<endl;
    cout<< " Baz[0]'s Area "<<baz[0].area()<<endl;
    cout<< "Baz[1]'s Area "<< baz[1].area()<<endl;
    return 0;
}
