//
//  main.cpp
//  payAfterTax
//
//  Created by Peter Roger Generelly IV on 10/2/22.
//

#include <iostream>
// pay calculator
using namespace std;
int main()
{
    // declare variables
    double hours, wage, pay, pay_after_tax;
    // define tax
    double const TAX = .20;
    cout << "What's your hourly wage?\n";
    cin >> wage;
    cout << "how many hours did you work this week?\n";
    cin >> hours;
    pay = wage * hours;
    pay_after_tax = pay -= (pay * TAX);
    cout << "Your have earned $" << pay_after_tax << endl;
    return 0;
}

