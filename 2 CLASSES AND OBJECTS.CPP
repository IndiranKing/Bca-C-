//EX. NO. 2 CLASSES AND OBJECTS
#include <iostream.h>
#include <conio.h>
class value
{
private:
int a,b;
public:
void getdata();
void show();
};
void value::getdata()
{
cout<<"Enter number1: ";
cin>>a;
cout<<"Enter number2: ";
cin>>b;
}
void value::show()
{
cout<<"The two numbers are "<<a <<" and "<<b;
}
void main()
{
clrscr();
value v;
cout<<"CLASSES AND OBJECTS\n";
cout<<"==================\n";
v.getdata();
v.show();
getch();
}
