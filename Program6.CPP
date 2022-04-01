//EX. NO. 6 UNARY OPERATOR OVERLOADING
#include <iostream.h>
#include <conio.h>
class unop
{
int a, b, c;
public:
void getvalue()
{
cout << "Enter the Two Numbers:";
cin >> a>>b;
}
void operator ++()
{
a = ++a;
b = ++b;
}
void operator --()
{
a = --a;
b = --b;
}
void display()
{
cout << a << "\t" << b<< endl;
}
};
void main()
{
clrscr();
unop obj;
cout<<"UNARY OPERATOR OVERLOADING\n";
cout<<"============================\n";
obj.getvalue();
++obj;
cout << "Increment Number\n";
obj.display();
--obj;
cout << "Decrement Number\n";
obj.display();
getch();
}
