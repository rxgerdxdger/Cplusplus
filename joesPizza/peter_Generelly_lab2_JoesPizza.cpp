//
//  main.cpp
//  joesPizza
//
//  Created by Peter Roger Generelly IV on 9/19/22.
//
//
//  main.cpp
//  JoesPizzaPlace
//
//  Created by Peter Roger Generelly IV on 9/19/22.
//
/* Roger Generelly
 w10150168
 
 Description: Calculate number of slices per pizza.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
int main() {
double totalPrice;
int slices, people, totalSlices, result;
double const SLICE = 14.125;
float area, diameter, radius;
    double const PI = 3.14159265359;
string name;
    istringstream inSS (name);
cout << "Enter your full name:  \n";
getline(cin, name);
cout << "What is the size of your pizza: ";
cin >> diameter;
cout << "How many people are expected to attend? ";
cin >> people;
    totalSlices = people * 4;
    radius = diameter / 2;
   area =  PI * radius * radius;
    slices = area / SLICE;
    result = totalSlices / slices;
    totalPrice = (area * .10) * result;
cout << "          Ticket Description        \n";
cout << "--------------------------------------\n";
cout << "Customer Name:  " << name << "\n";
cout << "--------------------------------------\n";
cout << "Pizza size:  " << diameter << " \" pizza""\n";
cout << "Party Size:  " << people << " people""\n";
cout << "Pizzas to Order:  " << fixed << setprecision(0) << result << "\n";
cout << "Slices per Pizza:  " << fixed << setprecision(0) << slices << "\n";
cout << "--------------------------------------\n";
cout << " Total Cost: $  " << fixed << setprecision(2) << totalPrice << "\n";

return 0;
}
