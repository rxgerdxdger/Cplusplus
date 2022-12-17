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
#include <cstring>
using namespace std;
int main() {
double diameter, slices;
int people, people2, result;
 double const SLICE = 14.125;
 float area;
string name;
cout << "Enter your full name:  ";
cin >> name;
cout << "What is the size of your pizza: ";
cin >> diameter;
cout << "How many people are expected to attend?";
cin >> people;
    people2 = people * 4;
   area = 3.14159265359 * ((diameter/2)*(diameter/2));
    slices = area / SLICE;
    result = people2 / slices;
cout << "          Ticket Description        \n";
cout << "--------------------------------------\n";
cout << "Customer Name:  " << name;
cout << "--------------------------------------\n";
cout << "Pizza size:  " << diameter;
cout << "Party Size:  " << people;
cout << "Pizzas to Order:  " << result;
cout << "Slices per Pizza:  " << slices;
cout << "--------------------------------------";
cout << " Total Cost: $  " << fixed << setprecision(2) << area <<"\n";

return 0;
}
