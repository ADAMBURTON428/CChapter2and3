#include <iostream>
#include <string>
using namespace std;

	int main()
	{

		double NightsStay;
		double NightCost = 100;
		double TelephoneUsage;
		double TelephoneCost = 0.25;
		double TotalBill;

		cout << " Enter nights stayed: ";
		cin >> NightsStay;

		cout << "Enter telephone usage: ";
		cin >> TelephoneUsage;

		TotalBill = NightCost * NightsStay + TelephoneCost * TelephoneUsage;

		cout << "That will be $" << TotalBill << endl;


		system("pause");

		return 0;










	}
