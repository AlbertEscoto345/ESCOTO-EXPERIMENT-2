#include <iostream>
using namespace std;

int main()
{
int x, y, z, a, b;

cout << "How many terms of the fibonacci sequence do you wish to see after the number" << endl;
cout << "zero?" << endl;
cin >> a;

x = 1;
y = 0;

cout << "Fibonacci numbers:" << endl;
cout << "(0), ";

for(b = 1; b <= a; b++)
{

z = x + y;
x = y;
y = z;

cout << z  << ", ";
}
return 0;
}
