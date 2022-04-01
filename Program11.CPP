//EX. NO. 11 SEQUENTIAL I/O OPERATIONS
//ILLUSTRATION OF OFSTREAM & IFSTREAM
#include <fstream.h>
#include <iostream.h>
#include <conio.h>
void main ()
{
char data[100];
int age;
clrscr();
cout<<"SEQUENTIAL I/O OPERATIONS\n";
cout<<"=========================\n";

// open a file in write mode.

ofstream outfile;
outfile.open("Bfile.txt");
cout << "Writing to the file" << endl;
cout << "Enter your name: ";
cin.getline(data, 100);

// write inputted data into the file.

outfile << data << endl;
cout << "Enter your age: ";
cin >> age;

// again write inputted data into the file.

outfile << age << endl;

// close the opened file.

outfile.close();

// open a file in read mode.

ifstream infile;
infile.open("Bfile.txt");

cout << "Reading from the file" << endl;
infile >> data;

// write the data at the screen.

cout << data << endl;

// again read the data from the file and display it.

infile >> age;
cout << age<< endl;

// close the opened file.

infile.close();
getch();
}
