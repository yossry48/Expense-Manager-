#include "Expense.h"

#include <iostream>
#include <ctime>
#include <string>


#pragma warning(disable : 4996)


Expense::Expense(double v, string d, time_t  ts) {

	price = v;
	detail = d;
	tt = tt;
	time(&ts);
	ti = localtime(&ts);
	saved_time = ctime(&ts);





}
Expense::Expense() {

	price = 0;
	detail = "no details";
}
void Expense::addvalue() {
	cout << "enter Expense value ";
	cin >> price;


}
void Expense::add_detail() {
	cout << "enter Expense value ";
	cin >> price;


}



ostream& operator << (ostream& output, Expense& p) {
	
	return output << " Expense value is " << p.price << "$" << " for " <<  p.detail << " at " << p.saved_time;
}