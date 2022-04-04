//EX. NO. 4 FRIEND FUNCTION
#include <iostream.h>
#include <conio.h>
class MEAN
{
int n1,n2;
public:
void getdata()
{
cout<<"Enter num1: ";
cin>>n1;
cout<<"Enter num2: ";
cin>>n2;
}
friend float ans(MEAN m);
};
float ans(MEAN m)
{
return float(m.n1+m.n2)/2;
}
void main()
{
clrscr();
MEAN m1;
cout<<"FRIEND FUNCTION\n";
cout<<"===============\n";
m1.getdata();
cout<<"Answer is: "<<ans(m1);
getch();
}
