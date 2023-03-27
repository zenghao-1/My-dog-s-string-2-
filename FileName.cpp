#include <iostream>
#include <string>
using namespace std;

int main()
{
	string MyString;

	MyString = "My dog's name is:";
	string first = "Spot";
	string last = "jones";

	MyString += first;
	MyString += last;

	cout << MyString << endl;
}