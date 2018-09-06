#include <iostream>
#include <string>
using namespace std;

int main()

{
		const int paychecks = 24;
		double percentUnknown; //input
		double totalPay; //total after percent
		double savingAcount;
		double Pay; //payment
		double overAllPay; //payment with paychecks
		cout << " Enter the amount you get payed: ";
		cin >> Pay;

		cout << "How much do you deposit in percentage: ";
		cin >> percentUnknown;
			
		overAllPay = Pay * paychecks;
		totalPay = overAllPay / percentUnknown;
		savingAcount = totalPay + 100;


		cout << "You Have " << savingAcount << " in your acount" << endl;



		system("pause");
		return 0;

}