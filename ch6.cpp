#include <iostream>
#include <iomanip>

using namespace std;

void multiFunction(int, int, int);

const int twenty = 20;
const int thirty = 30;
int out;

int main()
{
cout << "Please enter an a for add, s for subtract, m for multiply and d for divide:\n";
multiFunction(thirty, twenty, out);
cout << "Your total is:" << out;

}

void multiFunction (int, int, int)
{ char choice;
  cin >> choice;
		switch (choice)
		{
		case 'A':
		case 'a':
		out = thirty + twenty;
		break;
		case 'S':
		case 's':
		out = thirty - twenty;
		break;
		case 'M':
		case 'm':
		out = thirty * twenty;
		break;
		case 'D':
		case 'd':
		out = thirty / twenty;
		break;
		default:
		cout << "Invalid choice\n";
		cout << "Please enter \'A\', \'S\', \'M\'or \'D\'...\n";
		}
}
