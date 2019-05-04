#include <iostream>
using namespace std;

int main()
{
int counter, counter2;

counter = 1;
counter2 = 11;

cout << "Counting..." <<endl;

for(counter = 1;counter <= 9;counter++)
{
	cout << counter << ", ";	
}

for(counter2 = 10;counter2 <=30;counter2 = counter2 + 2)
{
	cout << counter2 << ", ";	
}

return 0;
}

