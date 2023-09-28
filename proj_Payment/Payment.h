#define _CRT_SECURE_NO_WARNINGS 
using namespace std;
#include <iostream>

class Payment
{
	//������� - ��� - ��������,
	char* firstName;
	char* lastName;
	char* patronymic;

	const int curYear = 2023;
	const int pensionFundPerc = 1;
	const int incomeTaxPerc = 13; //���������� �����,

	int yearJoined; //��� ����������� �� ������,
	int allowPerc; //������� ������ - ��,
	
	int daysWorked; //���������� ������������ ���� � ������,
	int workDays; //���������� ������� ���� � ������,

	double deductions; //���������� �����.
	double accruals;//����������
	double salary; //�����
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