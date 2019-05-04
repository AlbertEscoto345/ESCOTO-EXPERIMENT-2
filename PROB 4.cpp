#include <iostream>
using namespace std;

int main()
{
int x, y, z;

cout << "Enter first number: ";
cin >> x;

cout << "Enter second number: ";
cin >> y;

cout << "Enter third number: ";
cin >> z;

if (x > y && y > z)
cout << "The LARGEST of the three numbers is " << x << endl;
else if (y > x && x > z)
cout << "The LARGEST of the three numbers is " << y << endl;
else if(z > x && x > y)
cout << "The LARGEST of the three numbers is " << z << endl;

else if (x > z && z > y)
cout << "The LARGEST of the three numbers is " << x << endl;
else if (x == y && y > z)
cout << "The LARGEST of the three numbers is " << x << endl;
else if (x == z && z > y)
cout << "The LARGEST of the three numbers is " << x << endl;


else if (y > z && z > x)
cout << "The LARGEST of the three numbers is " << y << endl;
else if (y == x && x > z)
cout << "The LARGEST of the three numbers is " << y << endl;
else if (y == z && z > x)
cout << "The LARGEST of the three numbers is " << y << endl;


else if (z > y && y > x)
cout << "The LARGEST of the three numbers is " << z << endl;
else if (z == x && x > y)
cout << "The LARGEST of the three numbers is " << z << endl;
else if (z == y && y > x)
cout << "The LARGEST of the three numbers is " << z << endl;

else
cout << "The LARGEST of the three numbers is " << x << endl;

return 0;
}
