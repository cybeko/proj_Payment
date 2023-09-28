#define _CRT_SECURE_NO_WARNINGS 
#include "Payment.h"
using namespace std;

Payment::~Payment()
{
	delete[] firstName;
	delete[] lastName;
	delete[] patronymic;
}
Payment::Payment()
{
	firstName = nullptr;
	lastName = nullptr;
	patronymic = nullptr;

	yearJoined = NULL;
	allowPerc = NULL;
	daysWorked = NULL;
	workDays = NULL;
	deductions = NULL;
	accruals = NULL;
	salary = NULL;
}
Payment::Payment(const char* u_firstName, const char* u_lastName, const char* u_patronymic, int u_yearJoined, int u_allowPerc, int u_daysWorked, int u_workDays, double u_salary)
{
	firstName = new char[strlen(u_firstName) + 1];
	strcpy(firstName, u_firstName);

	lastName = new char[strlen(u_lastName) + 1];
	strcpy(lastName, u_lastName);

	patronymic = new char[strlen(u_patronymic) + 1];
	strcpy(patronymic, u_patronymic);

	yearJoined = u_yearJoined;
	allowPerc = u_allowPerc;
	daysWorked = u_daysWorked;
	workDays = u_workDays;
	salary = u_salary;
}

void Payment::Print()
{
	cout << "\tPayment info." << endl;
	cout << "Full name: " << firstName << " " << lastName << " " << patronymic<< endl;
	cout << "Year joined: " << yearJoined << endl;
	cout << "Salary: " << salary << endl;
	cout << "Allowance percent: " << allowPerc << "%" << endl;
	cout << "Income tax: " << incomeTaxPerc << "%"<< endl;
	cout << "Total work days: " << workDays << endl;
	cout << "Days worked: " << daysWorked << endl;
	cout << "Deductions: " << deductions << endl;
	cout << "Accurals: " << accruals << endl;
}

void Payment::CountLoS()
{
	int temp = curYear - yearJoined;
	cout << "Length of service: " << temp;
	if (temp == 1)
	{
		cout << " year" << endl;
	}
	else
	{
		cout << " years" << endl;
	}
}

void Payment::CountDeductions()
{
	deductions = (accruals / 100) * (incomeTaxPerc + pensionFundPerc);
}

void Payment::CountAccurals()
{
	accruals = (salary / workDays * daysWorked) + ((salary / workDays * daysWorked) / 100 * allowPerc);
}

void Payment::CountTotal()
{
	int temp = accruals - deductions;
	cout << "Sum gotten: " << temp<<endl;
}
