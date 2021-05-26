#pragma warning(disable : 4996)
#include <iostream>
#include "Expense.cpp"
#include "Expense.h"
#include <string>
#include <vector>
#include <ctime>
#include <limits>
using namespace std;

int wmain()
{
    int choice;
    double v;
    string detail;
    time_t tt;
    
    vector<Expense> Z;
    double total_income ;

    cout << " Welcome to Expense System Manger " << endl;
    cout << "******************************************" << endl;
    cout << " enter monthly income" << endl;

    cin >> total_income;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Bad entry.  Enter a NUMBER: ";
        std::cin >> total_income;
    }
    cout << endl;
   
    
    while (true) {

        
        cout << "******************************************" << endl;

        cout << "choose 1 for add expense " << endl;
        cout << "choose 2 for view expense  " << endl;
        cout << "choose 3 for view account balance " << endl;
        cin >> choice;
        while (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Bad entry.  Enter a NUMBER: ";
            std::cin >> total_income;
        }

        if (choice == 1) {

            cout << "enter expense value" << endl;
            cin >> v;
            while (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Bad entry.  Enter a NUMBER: ";
            }
            cout << "enter expense detail  " << endl;

            cin >> detail;
            while (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Bad entry.  Enter a NUMBER: ";
            }
            time(&tt);
            
            Z.push_back(Expense(v, detail, tt));
            total_income = total_income - v;
        }
        else if (choice == 2) {

            for (int i = 0; i < Z.size(); i++) {

                cout << endl;
                cout << endl;
                cout << Z[i] << endl;
                cout << endl;
                cout << endl;
            }


        }
        else if (choice == 3) {
            cout << " Your current balance is = " << total_income << endl ; 

        }
        else {
        
        cout << "wrong choice" << endl;
        
        }
    
    }



    







}