#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

void menu(void);
char slection(void);
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

void menu()
{
    cout<<"\nAddition";
    cout<<"\nSubtraction";
    cout<<"\nMultiplication";
    cout<<"\nDivision";
    cout<<"\nQuite";
    cout<<"\nEnter your option (A or S or M or D or Q) : ";
}
char selection(void )
{
    return (toupper(getchar()));
}
float add(float a, float b)
{
    return (a+b);
}
float sub(float a, float b)
{
    return (a-b);
}
float mul(float a, float b)
{
    return (a*b);
}
float div(float a, float b)
{
    return (a/b);
}

int main()
{
    float x, y;
    char c;
    cout<<"Enter first number: ";
    cin >>x;
    cout<<"Enter second number: ";
    cin >>y;
    menu();
    c=selection();

    while(c!='Q')
    {
        switch(c)
        {
            case 'A':cout<<"\nAddition of two numbers : "<<add(x,y);break;
            case 'S':cout<<"\nSubtraction of two numbers : "<<sub(x,y);break;
            case 'M':cout<<"\nMultiplication of two numbers : "<<mul(x,y);break;
            case 'D':cout<<"\nDivision of two numbers : "<<div(x,y);break;
            default:cout<<"Default";
        }
        cout<<"\nStrike anyKey to Continue!"<<endl;
        getchar();
        menu();
        c=selection();
    }
    return 0;
}
