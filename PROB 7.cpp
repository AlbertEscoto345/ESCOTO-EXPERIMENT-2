#include <iostream>
using namespace std;

int main()
{
int x, y, z;
y = 0;

do
{
cout << "Enter a whole number: " << endl;
cin >> x;

if (x > 0)
{
for (z = 1; z <= x; ++z)
{
y = y + z;
}
cout << "The sum of all whole numbers from 1 to " << x << " is " << y << "." << endl;
cout << endl;
y = 0;
}
else
cout << "Thank you!" << endl;
}
while(x > 0);

return 0;
}

