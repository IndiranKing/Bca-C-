//EX. NO. 10 TEXT FILE MANIPULATION
// ILLUSTRATION OF END OF FILE DEDUCTION
#include<iostream.h>
#include<fstream.h>
void main()
{
char arr[40];
clrscr();
cout<<"TEXT FILE MANIPULATION\n";
cout<<"=====================\n";
//Creating an input stream to read a file
ifstream inf;
//Opening a file named File.txt for reading its content
inf.open("file.txt", ios::in);
while(inf)
{
inf.getline(arr,40);
cout<<arr;
cout<<"\n";
}
inf.close();
getch();
}