//
//  roger_Generelly_lab1_summerPay.cpp
//  Created by Peter Roger Generelly IV on 9/12/22.
//  Title: summerPay
//  File Description: Pay and Budgeting Calculator
//


#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;

int main(){
    // Declaring Variables for hours, starting_pay, gross pay, net pay, tax, spendings.
    int total, leftover;
    double hours, starting_pay, gross, net, tax, clothes, supplies, bonds, add_bonds, leftoverFinal;
    // Ask for payment
   cout << "Please input the number of hours you worked this week... ";
    cin >> hours;
    cout << "Please input pay per hour...  ";
    cin >> starting_pay;
    // Receive Pay amount and time;
    gross = hours * starting_pay;
    tax = gross * .2;
    net = gross - tax;
    clothes = net * .15;
    supplies = net * .03;
    bonds = net * .15;
    add_bonds = bonds * .75;
    // Display result after calculations;
    cout << fixed << setprecision(2);
    cout << "--------------------------------\n";
    // Set precision
    cout <<
    &cout << "\nYour income before tax: " << gross << " and after tax: "  << net << " from your summer job.\n";
    cout << "--------------------------------\n";
    cout << "The taxes you owed on your income:  " << tax << "\n";
    cout << "The money you saved for clothes:  " << clothes << "\n";
    cout << "The money you saved for school supplies:  " << supplies << "\n";
    cout << "The money you spend to buy savings bonds:  " << bonds << "\n";
    cout << "The money your parents spend to buy additional savings bonds for you:  " << add_bonds << "\n";
    cout << "--------------------------------\n";
    //BONUS
    total = (tax + net + clothes +supplies + bonds + add_bonds) - gross;
    leftover =  leftover % total;
    leftoverFinal = leftover;
    cout << "the remaining amount: " << leftoverFinal << "\n";
    cout << "---------------------------------\n";
    return 0;
}

