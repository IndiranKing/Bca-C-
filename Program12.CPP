//EX. NO. 12 COMMAND LINE ARGUMENTS
//FINDING THE BIIGGEST NUMBER
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	clrscr();
	int c[10];
	int i,temp,j,greatest;
	j = 0;
	cout<<"COMMAND LINE ARGUMENTS\n";
	cout<<"=========================\n";
	for(i=1; i<argc; i++)
	{
		temp = atoi(argv[i]);
		c[j] = temp;
		j++;
	}
	greatest = c[0];
	for (i = 0; i < 10; i++)
	{
		if (c[i] > greatest)
		{
			greatest = c[i];
		}
	}
	cout<<"Greatest of ten numbers is "<< greatest;
	getch();
	return 0;
}
