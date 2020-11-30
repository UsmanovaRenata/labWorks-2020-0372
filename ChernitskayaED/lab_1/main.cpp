#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char sing;
	float a;
	float b;
	char ch;	
	do{
	cout << "Enter 1 number: ";
	while (!(cin >> a))
	{
		cin.clear();
		cin.ignore();
		cout << "Wrong type" << endl;
	}
	cout << "Enter 2 number: ";
	while (!(cin >> b))
	{
		cin.clear();
		cin.ignore();
		cout << "Wrong type" << endl;
	}
	cout << "Enter the operation: ";
	cin >> sing;

	if (b == 0 & sing == '/') 
	{
		cout << "You can't divide by zero" << endl;
	}
	int res;
	switch (sing) 
	{
	case'+':res = a + b;
		break;
	case'-':res = a - b;
		break;
	case'*':res = a * b;
		break;
	case'/':res = a / b;
		break;
	default:
		cout << "Sing unrecognized" << endl;
	}
	
	cout << "Result: " << res << endl << "Click esc if you're finished" << endl;

	ch= _getch(); 
 } while (ch != 27); 
 
     system ("Pause");
	 return 0;
}
