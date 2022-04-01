//EX. NO. 5B DESTRUCTOR
#include <iostream.h>
#include <conio.h>
class A
{
public:
//Constructor
A()
{
	cout << "Constructor called";
}
//Destructor
~A()
{
	cout << "\n Destructor called";
}
};
void main()
{
	clrscr();
	cout<<"DESTRUCTOR\n";
	cout<<"============\n";
	A obj1; // Constructor Called
	getch();
} // Destructor called for obj1
