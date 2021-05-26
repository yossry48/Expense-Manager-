#pragma once
#include <string>
#include <ctime>

using namespace std;

class Expense
{
private:
	double  price;
	string detail;
	time_t  tt;
	struct tm* ti;

	

	double total_income;

public:
	string saved_time;
	inline Expense();
	inline Expense(double v, string d, time_t  ti);
	inline friend ostream& operator << (ostream& output, Expense& p);
public:
	inline void addvalue();
	inline void add_detail();

};