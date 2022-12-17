//
//  Roger_Generelly_lab4_bonus.cpp
//  Peter_Generelly_lab4_code
//
//  Created by Peter Roger Generelly IV on 10/10/22.
//



#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double weight, total, shipping_rate;
    cout << "What is the weight of the package?(Please include decimals)  "; //PS0 FC0
    cin >> weight;
    
        if (weight <= 2.00){ //PS1 FC1
        shipping_rate = 1.50; //PS8 FC1
    }
        else if (weight > 2.00 && weight <= 6.00){ //PS2 FC3
        shipping_rate = 3.00; //PS9 FC9
    }
        else if (weight > 6.00 && weight <= 10.00){ //PS3 FC3
        shipping_rate = 4.00; //PS10 FC10
    }
        else if (weight > 10.00) { //PS4
            shipping_rate = 4.75;
        } //PS11 FC11
   
           
       
    }
    
    
    total = weight * shipping_rate; //P12 FC12
    cout << fixed << setprecision(2);
    cout << "Shipping rate: $" << shipping_rate << endl; //PS13 FC13
    cout << "Total cost: $" << total << endl; // PS14 FC14
    
}
