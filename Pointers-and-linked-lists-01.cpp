// Pointers-and-linked-lists-01.cpp 
// Joseph Rentfrow


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 5;
	cout << &n << endl;
	int* ptr = &n;
	cout << ptr << endl;
	cout << *ptr << endl;
	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;

	int v;
	int* ptr2 = &v;
	*ptr2 = 7;
	cout << "v = " << v << endl;

	int Age = 19;
	int* pAge = &Age;
	double gpa = 2.7;
	double* pGpa = &gpa;
	string name = "Mike";
	string* pname = &name;
	cout << "age: " << &Age << endl;
	cout << "Gpa: " << &gpa << endl;
	cout << "Name: " << &name << endl;
	cout << *pAge << endl << endl;

	char myChars[3] = { 'a','b','c' };
	for (char c = 'a'; c <= 'c'; ++c) 
	{
		cout << c << endl;
	}
	

	char myChar = 'z';
	char* pMyZptr = &myChar;
	cout << " I expect to see a z: " << *pMyZptr << endl;

	char* pMyArrayptr;
	pMyArrayptr = myChars;
	pMyArrayptr++;
	cout << pMyArrayptr << endl;
	cout << *pMyArrayptr << endl;
}


