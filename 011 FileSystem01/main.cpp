#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    myFile.open("exeone.txt", ios::out);
    if(myFile.is_open())
    {
        myFile<<"Hello, World!"<<endl;
        myFile<<"This is my first file system for C++"<<endl;
        myFile.close();
    }
    myFile.open("exeone.txt", ios::app);
    if(myFile.is_open())
    {
        myFile<<"Hello, ThanZawAou"<<endl;
        myFile<<"This is my second fileSystem of C++";
        myFile.close();
    }

    return 0;
}