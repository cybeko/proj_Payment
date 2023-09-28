#define _CRT_SECURE_NO_WARNINGS 
using namespace std;
#include <iostream>

class Payment
{
	//фамили€ - им€ - отчество,
	char* firstName;
	char* lastName;
	char* patronymic;

	const int curYear = 2023;
	const int pensionFundPerc = 1;
	const int incomeTaxPerc = 13; //подоходный налог,

	int yearJoined; //год поступлени€ на работу,
	int allowPerc; //процент надбав - ки,
	
	int daysWorked; //количество отработанных дней в мес€це,
	int workDays; //количество рабочих дней в мес€це,

	double deductions; //удержанна€ суммы.
	double accruals;//начислени€
	double salary; //оклад
public:
	~Payment();
	Payment();
	Payment(const char* u_firstName, const char* u_lastName, const char* u_patronymic, int u_yearJoined, int u_allowPerc, int u_daysWorked, int u_workDays, double u_salary);
	void Print();

	void CountLoS();
	void CountDeductions();
	void CountAccurals();
	void CountTotal();

};