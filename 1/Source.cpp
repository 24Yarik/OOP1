#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

class letter
{
public:
	char symb;
	int colors;
	int cod;
	letter()
	{
		colors = 10;
		cod = 0;
	}

	letter(int c, char d)
	{
		colors = c;
		symb = d;
		cod = int(symb);
	}
	
	void print()
	{
		cout << symb  << " has color " << colors << " code " << cod << endl;
	}
};

void main()
{
	letter a(1, 'A');
	letter b(2, 'B');
	letter c(3, 'C');
	letter d(4, 'D');
	cout << "Colors: 1=White, 2=Black, 3=Blue, 4=Red" << endl;
	a.print();
	b.print();
	c.print();
	d.print();
	_getch();
}