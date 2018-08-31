#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double DayStayed = 0;
	double RoomCharge = 120;
	double InternetCharge = 9.99;
	double TotalBill;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your days stayed: ";
	cin >> DayStayed;

	TotalBill = InternetCharge * DayStayed + RoomCharge;
	cout << "**************";
	cout << "\nThat will be $" << TotalBill << endl;
	cout << "\n**************" << endl;
	
	system("pause");

	return 0;



	



	









}

