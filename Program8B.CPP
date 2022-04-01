//EX. NO. 8B MULTILEVEL INHERITANCE
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
class fourWheeler: public Vehicle
{
public:
fourWheeler()
{
cout<<"Objects with 4 wheels arevehicles"<<endl;
}
};
class Car: public fourWheeler
{
public:
Car()
{
cout<<"Car has 4 Wheels"<<endl;
}
};
void main()
{
clrscr();
cout<<"MULTILEVEL INHERITANCE\n";
cout<<"======================\n";
Car obj;
getch();
}