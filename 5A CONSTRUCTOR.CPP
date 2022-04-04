//EX. NO. 5A CONSTRUCTOR
#include <iostream.h>
#include <conio.h>
class construct
{
public:
int a, b;
// Default Constructor
construct()
{
a = 10;
b = 20;
}
};
void main()
{
clrscr();
// Default constructor called automatically when the object is created
construct c;
cout<<"CONSTRUCTOR\n";
cout<<"=============\n";
cout << "a: " << c.a << endl << "b: " << c.b;
getch();
}
