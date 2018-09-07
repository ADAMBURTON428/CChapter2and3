#include <iostream>
#include <string>
using namespace std;

int main()
{

	int bagels;
	double bagelsCost;
	int donuts;
	double donutsCost;
	int coffee;
	double coffeesCost;
	int totalCost;

	cout << "Enter the a amount bagels: ";
	cin >> bagels;


	cout << "Enter the a amount donuts: ";
	cin >> donuts;


	cout << "Enter the a amount coffees: ";
	cin >> coffee;

	bagelsCost = bagels * .99;
	donutsCost = donuts * .75;
	coffeesCost = coffee * 1.20;

	totalCost = bagelsCost + donutsCost + coffeesCost;

	cout << "That will be $ " << totalCost << endl;



	system("pause");

	return 0;

}
