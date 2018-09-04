#include <iostream>
#include <string>
using namespace std;

int main()

{
	double celsius8am;
	double celsius12pm;
	double celsius5pm;
	double fahrenheit8am;
	double fahrenheit12pm;
	double fahrenheit5pm;
	
	cout << "What is the temperature in celsius at 8am ";
	cin >> celsius8am;
	
	cout << "What is the temperature in celsius at 12pm ";
	cin >> celsius12pm;
	
	cout << "What is the temperature in celsius at 5pm ";
	cin >> celsius5pm;
	
	fahrenheit8am = celsius8am * 1.8 + 32;
	fahrenheit12pm = celsius12pm * 1.8 + 32;
	fahrenheit5pm = celsius5pm * 1.8 + 32;
	
	cout << "The temperature for fahrenheit 8 am is " << fahrenheit8am << endl;
	cout << "The temperature for fahrenheit 12 pm is " << fahrenheit12pm << endl;
	cout << "The temperature for fahrenheit 5 pm is " << fahrenheit5pm << endl;

	system("pause");

	return 0;





}