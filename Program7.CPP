//EX. NO. 7 BINARY OPERATOR OVERLOADING
#include <iostream.h>
using namespace std;
class Posn
{
public:
int x = 10;
int y =20;
Posn operator + (Posn p)
{
Posn pn;
pn.x = x + p.x;
pn.y = y + p.x;
return pn;
}
bool operator == (Posn p)
{
if ( x == p.x && y==p.y)
return true;
}
};
int main()
{
else
return false;
cout<<"BINARY OPERATOR OVERLOADING\n";
cout<<"============================\n";
Posn p1, p2;
Posn p3 = p1+p2;
cout<<p3.x<<" " <<p3.y<<endl;
if ( p1==p2)
cout<<"THEY ARE SAME!!!";
return 0;
}
