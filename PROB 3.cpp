#include<iostream>
#include<cmath>
#include<iomanip>
//#include<conio.h>

using namespace std;
int main()
{
int x;
double V, y, z;
z = 2.5;

cout << "Enter X-value (whole numbers only):" << endl;
cin >> x;
cout << "Enter Y-value:" << endl;
cin >> y;

switch(x)
{
case 1:
	if(y > 1 && y < 5)
	cout << "Result: " << setprecision(3) << (V = x * y * z) << endl;
	else if(y >= 5)
	cout << "Result: " << setprecision(3) << (V = x + (y / z)) << endl;
	else
	cout << "Result: " << setprecision(3) << (V = x + y + z) << endl;
	break;
case 2:
	if(y <= 5)
	cout << "Result: " << setprecision(3) << (V = abs((x - y)/z)) << endl;
	else
	{
	if(V > 1)
	cout << "Result: " << setprecision(3) << (V = x - sqrt(y + z)) << endl;
	else
	cout << "Result: " << setprecision(2) << (V = x - sqrt(y + z)) << endl;
	}
	break;
default:
	V = x + y + z;
	if(V < 10)
	cout << "Result: " << setprecision(3) << V << endl;
	else if(V > 10 && V < 100)
	cout << "Result: " << setprecision(4) << V << endl;
	else
	cout << "Result: " << setprecision(5) << V << endl;
	break;
}
//_getch();
return 0;
}
