//EX. NO. 8C MULTIPLE INHERITANCE
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
class FourWheeler
{
public:
FourWheeler()
{
cout << "This is a 4 wheeler Vehicle";
}
};
class Car: public Vehicle, public FourWheeler
{
};
void main()
{
clrscr();
cout<<"MULTIPLE INHERITANCE\n";
cout<<"====================\n";
// Creating object of sub class willinvoke the constructor of base classes
Car obj;
getch();
}
