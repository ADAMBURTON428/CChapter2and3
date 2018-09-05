#include <iostream>
#include <string>
using namespace std;

int main()
{
	double dozen = 2.00;
	int input;
	double eggcost = 0.25;
	double total;
	int remainder;

	cout << " How many eggs do you like ";
	cin >> input;
	
	if (input < 12)
	{
		total = input * eggcost;

		cout << "it will cost $ " << total << endl;

	}
	
	
	if (input > 12)
	{
	remainder = input % 12;
	total = remainder * eggcost + dozen;

	cout << "it will cost $ " << total << endl;
	}

	{
		if ( input == 12 )

	cout << "it will cost $ " << dozen << endl;


	}
	
	system("pause");

	return 0;
}









	











