//EX. NO. 8A SINGLE INHERITANCE
#include <iostream.h>
#include <conio.h>
class Vehicle
{
public:
Vehicle()
{
cout << "This is a Vehicle" << endl;
}
};
class Car: public Vehicle
{
};
void main()
{
clrscr();
cout<<"SINGLE INHERITANCE\n";
cout<<"=================\n";
Car obj;
// creating object of sub class will invoke the constructor of base classes
getch();
}
