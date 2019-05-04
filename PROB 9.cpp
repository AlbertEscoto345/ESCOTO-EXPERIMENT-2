#include<iostream>

using namespace std;
int main()
{
int x, y, rows, columns; 

cout << "How many rows: ";
cin >> rows;

cout << "How many columns: ";
cin >> columns;
cout << " " << endl;

for(x = 1; x <= rows; ++x)
{
for(y = 1; y <= columns; ++y)
{cout << "*";
}
cout << " " << endl;
}

return 0;
}
