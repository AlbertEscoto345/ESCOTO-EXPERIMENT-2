#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
double gallonsconsumed, unpaid, due;

cout << "Enter unpaid balance." << endl;
cin >> unpaid;

cout << "Enter number of gallons consumed." << endl;
cin >> gallonsconsumed;

if(unpaid == 0)
{
due = 35 + 1.10 * gallonsconsumed;
if (due > 100 && due < 1000)
cout << "Amount due: P" << setprecision(5) << due << endl;
else if (due > 1000 && due < 10000)
cout << "Amount due: P" << setprecision(6) << due << endl;
else if (due > 10000 && due < 100000)
cout << "Amount due: P" << setprecision(7) << due << endl;
else if (due > 100000 && due < 1000000)
cout << "Amount due: P" << setprecision(8) << due << endl;
else
cout << "Amount due: P" << setprecision(4) << due << endl;
}
else
{
due = 55 + unpaid + 1.10*gallonsconsumed;
if (due > 100 && due < 1000)
cout << "Amount due: P" << setprecision(5) << due << endl;
else if (due > 1000 && due < 10000)
cout << "Amount due: P" << setprecision(6) << due << endl;
else if (due > 10000 && due < 100000)
cout << "Amount due: P" << setprecision(7) << due << endl;
else if (due > 100000 && due < 1000000)
cout << "Amount due: P" << setprecision(8) << due << endl;
else
cout << "Amount due: P" << setprecision(4) << due << endl;
}

return 0;
}

