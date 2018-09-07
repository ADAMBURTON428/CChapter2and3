#include <iostream>
#include <string>
using namespace std;

int main()
{


	double FWT = .2;
	double FICA = .08;
	double State = .04;
	double input;
	double total;
	double totalPay;


	cout << "Enter your weekly gross pay: ";
	cin >> input;

	total = input * (State + FICA + FWT);

	totalPay = input - total;

	cout << "Your net pay is " << totalPay << endl;





	system("pause");

	return 0;

}