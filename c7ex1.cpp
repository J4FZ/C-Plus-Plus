#include <iostream>
using namespace std;

void one ()
{
	int numino;
	cout << "What is the number?";
	cin >> numino;


}

void two ()
{
	int numintw;
	cout << "What is the number?";
	cin >> numintw;
	if (numintw = 1);
	{
	cout << "one";
	} if numintw
}

void three ()
{
	int numinth;
	cout << "What is the number?";
	cin >> numinth;
}
int main()
{
	int input;
	cout << "1. One-Digit\n";
	cout << "2. Two-Digits\n";
	cout << "3. Three-Digits\n";
	cout << "4. Exit\n";
	cout << "How many digits does the number have? : ";
	cin >> input;

	switch ( input )
	{
	case 1:
	one();
	break;
	case 2:
	two();
	break;
	case 3:
	three();
	break;
	case 4:
	cout << "Thank you for using!\n";
	break;
	default:
	cout << "Error, bad input, quitting\n";
	break;
	}
}
