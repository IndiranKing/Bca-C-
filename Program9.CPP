//EX. NO. 9 VIRTUAL FUNCTIONS
#include <iostream.h>
#include <conio.h>
class base
{
public:
virtual void print()
{
cout << "Print base class" << endl;
}
void show()
{
cout << "Show base class" << endl;
}
};
class derived : public base
{
public:
void print()
{
cout << "Print derived class" << endl;
}
void show()
{
cout << "Show derived class" << endl;
}
};

void main()
{
cout<<"VIRTUAL FUNCTIONS\n";
cout<<"=================\n";
base* bptr;
derived d;
bptr = &d;
// virtual function, binded at runtime
bptr->print();
// Non-virtual function, binded at compile time
bptr->show();
getch();
}