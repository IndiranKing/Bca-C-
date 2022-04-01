//EX. NO. 8E HYBRID INHERITANCE
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
class Fare
{
public:
Fare()
{
cout<<"Fare of Vehicle\n";
}
};
class Car: public Vehicle
{
};
class Bus: public Vehicle, public Fare
{
};
void main()
{
clrscr();
cout<<"HYBRID INHERITANCE\n";
cout<<"==================\n";
Bus obj2;
getch();
}
