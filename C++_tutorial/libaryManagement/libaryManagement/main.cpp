#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library
{
public:
	int id;
	string name;
	string author;
	string student;
	int price;
	int pages;
};

int main()
{
	Library lib[20];
	int input = 0;
	int count = 0;

	while (input !=3)
	{
		cout << "Enter 1 to input details like Id, Nam, Author, Student, Price, Pages" << endl;
		cout << "Enter 2 to display detials" << endl;
		cout << "Enter 3 to quite" << endl;
		cin >> input;

		switch (input)
		{
			case 1:
				
				cout << "Enter Book Id" << endl;
				cin >> lib[count].id;
				cout << "Enter Book Name" << endl;
				cin >> lib[count].name;
				cout << "Enter Book Author" << endl;
				cin >> lib[count].author;
				cout << "Enter Book Student" << endl;
				cin >> lib[count].student;
				cout << "Enter Book price" << endl;
				cin >> lib[count].price;
				cout << "Enter Book Pages" << endl;
				cin >> lib[count].pages;
				count++;
				break;

			case 2:
				for (int i = 0; i < count; i++)
				{
					cout << "Book Id: " << lib[i].id << endl;
					cout << "Book Name: " << lib[i].name << endl;
					cout << "Book Author: " << lib[i].author << endl;
					cout << "Book Student: " << lib[i].student << endl;
					cout << "Book Price: " << lib[i].price << endl;
					cout << "Book Pages: " << lib[i].pages << endl;
				}
				break;

			case 3:
				exit(0);
				break;

			default:
				cout << "You have entered wrong value, plase try again!" << endl;
		}
	}
}
