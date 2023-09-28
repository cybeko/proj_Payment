#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include "Payment.h"

int main()
{
	Payment E("John", "Doe", "Ivanov" , 2020, 5, 28, 30, 9500);
	E.Print();

	cout << endl;
	E.CountAccurals();
	E.CountDeductions();
	E.Print();
	E.CountTotal();
	E.CountLoS();
}