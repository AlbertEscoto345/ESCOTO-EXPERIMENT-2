#include<iostream>

using namespace std;
int main()
{
char package;
int usedhours;

cout << "Enter your subscription package. Please type A, B, or C." << endl;
cin >> package;

cout << "Enter number of hours used" << endl;
cin >> usedhours;

switch(package)
{
	case 'A':
	case 'a':
		if(usedhours <= 10)
		cout << "Total amount due: P995" << endl;
		else
		cout << "Total amount due: P" << ((usedhours-10)*20)+995 << endl;
		break;
	case 'B':
	case 'b':
		if(usedhours <= 20)
		cout << "Total amount due: P1495" << endl;
		else
		cout << "Total amount due: P" << ((usedhours-20)*10)+1495 << endl;
		break;
	case 'C':
	case 'c':
		cout << "Total amount due: P1995" << endl;
		break;
	default:
		cout << "Package does not exist. Please choose from Package A, Package B, or Package C." << endl;
		break;		
}
return 0;
}
