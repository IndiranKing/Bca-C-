//EX. NO. 8D HIERARCHICAL INHERITANCE
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
class Bus: public Vehicle
{
};
void main()
{
clrscr();
cout<<"HIERARCHICAL INHERITANCE\n";
cout<<"========================\n";
Car obj1;
Bus obj2;
getch();
}