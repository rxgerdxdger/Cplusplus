///
//  summerSavings.cpp
//  joesPizza
//
//  Created by Peter Roger Generelly IV on 9/30/22.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double  a, b, c;
    float d, e, leftoverAmount;
cout << "Enter your pay amount for this week: ";
cin >> a;
cout << "What percent do you want to put back for school supplies (as a decimal)? ";
cin >> b;
cout << "What percent do you want to put back for clothes(as a decimal)? ";
cin >> c;
e = a * b;
d = a * c;
leftoverAmount = a - (e + d);
cout << setprecision(2) << fixed;
cout << "You will put back $ " << e << " for supplies.\n";
cout << "You will put back $ " << d << " for clothes.\n";
cout << "You will have $ " << leftoverAmount;
cout << " left after savings.\n";
}


