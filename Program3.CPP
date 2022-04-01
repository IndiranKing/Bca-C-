//EX. NO. 3 PASSING OBJECTS TO FUNCTION
#include <iostream.h>
#include <conio.h>
class Student
{
public:
double marks;
// Constructor to initialize marks
Student(double m)
{
marks = m;
}
};
// Function that has objects as parameters
void calculateAverage(Student s1, Student s2)
{
// Calculate the average of marks of s1 and s2
double average = (s1.marks + s2.marks) / 2;
cout << "Average Marks = " << average << endl;
}
void main()
{
clrscr();
Student student1(87.0), student2(95.0);
cout<<"PASSING OBJECTS TO FUNCTION\n";
cout<<"===========================\n";
// pass the objects as arguments
calculateAverage(student1, student2);
getch();
}
