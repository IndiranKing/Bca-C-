//EX. NO. 1 FUNCTION OVERLOADING
#include <iostream.h>
#include <conio.h>
void add(int a, int b)
{
cout <<"The sum of 2 integers = "<<a+b <<endl;
}
//Default Arguments
void add(double a, double b, double c = 5.5)
{
cout <<"The sum of 3 real numbers = "<<a+b+c <<endl;
}
//Inline Function
inline void add(int a, int b, int c)
{
cout <<"The sum of 3 integers = "<<a+b+c <<endl;
}
void main()
{
clrscr();
cout<<"FUNCTION OVERLOADING\n";
cout<<"=====================\n";
add(20, 40);
add(7.6,4.7);
add(40, 20, 30);
getch();
}
