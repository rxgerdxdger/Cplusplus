/* Roger Generelly
 w10150168
 
 Description: Calculate number of slices per pizza.
 */

#include <iostream>
using <iomanip>
using <cmath>
using namespace std;
int main() {
 double diameter, slices, totalSlicesNeeded, people, people2, result;
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
    result = people2 / slices;
area = 3.1415927 * ((diameter/2)*(diameter/2));
slices = area / SLICE;
cout << "          Ticket Description        ";
    cout << "--------------------------------------";
    cout << "Customer Name:  " << name;
    cout << "--------------------------------------";
    cout << "Pizza size:  " << diameter;
    cout << "Party Size:  " << people;
    cout << "Pizzas to Order:  " << result;
    cout << "Slices per Pizza:  " << slices;
    cout << "--------------------------------------";
    cout << " Total Cost: $  " << setprecision(3) << area << endl;

return 0;
}
