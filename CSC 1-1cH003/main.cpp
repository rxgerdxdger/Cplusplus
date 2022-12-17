//
//  main.cpp
//  CSC 101
//
//  Created by Peter Roger Generelly IV on 9/15/22.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
  // declare variables : speed A and Speed B
    double a, b;
    int hours, minutes;
    float time, dis_a, dis_b, dis;
    cout << "Enter the speed of each car:  ";
    cin >> a >> b;
    cout << "how much time has passed ( Enter as HH MM): ";
    cin >> hours >> minutes;
    time = hours + (minutes/60.0);
    dis_a = a * time;
    dis_b = b * time;
    dis = hypot(dis_a, dis_b);
    cout << setprecision(2) << fixed;
    cout << " the distance between the two cars is " << dis << " miles.\n";

    return 0;
}
