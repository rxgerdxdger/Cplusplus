//Hotel Occupancy
//
//  roger_generelly_lab_5.cpp
// Summary
//A hotel manager has hired you as a programmer to determine the occupancy percentage of their hotel. Write a program that will ask the user for the highest floor the hotel’s elevator can reach. Afterwards, the program will ask, floor by floor, the following:

//· Total number of rooms on the floor

//· Number of rooms occupied on this floor

//This should be done for each available floor. The program should keep a running total of the total number of rooms at the hotel as well as the number of rooms that are occupied as the data for each floor is entered. Additionally, since most hotels tend to skip the floor number 13, omit floor 13 from your data. Once the program has completed inputting the data for each floor, the following statistics should be calculated and displayed to the user:

//· The total room count at the hotel

//· The total number of rooms that are occupied

//· The total number of rooms that are vacant

//· The percentage occupancy of the hotel. (Rounded to 2 decimal place)
//  Created by Peter Roger Generelly IV on 10/25/22.


#include <iostream>
#include <iomanip>

using namespace std;
int main() {
   
    int floorNum = 0, occuNum = 0, total_rooms = 0,vacancy = 0, rooms = 0,occuTotal = 0;
    float occuPerc = 0.00f;
    
    
    
    
    cout << "What is the highest floor number the hotel has?  ";
    cin >> floorNum;
    // recieves highest floor input value
    while(floorNum <1)
        //while loop: if user inputs a value of zero.
    {
        cout << "***ERROR*** Please Enter a Valid Floor Number.";
        cin >> floorNum;
        // prints Error message Plus ask for a valid entry.
    }
    for (int x = 1; x <= floorNum; x++)
        // for loop: the count increases once every iteration until it meets the value of the highest number of floors.
    {
        if(x != 13)
        {
            cout << "Enter the number of rooms on Floor " << x << ":  ";
            cin >> rooms;
            total_rooms += rooms;
        cout << "***ERROR*** Floor occupancy should not exceed floor count. Enter again... ";
        cout << "Enter the number of rooms on Floor " << x << ": ";
                cin >> rooms;
        }
         if(x != 13)
          {
         cout << "Enter the occupancy(number of rooms occupied) for Floor " << x << ": ";
        cin >> occuNum;
     
        occuTotal += occuNum;
            }
           }
        occuPerc =  (occuTotal * 1.0f / total_rooms) * 100.0f;
        vacancy = total_rooms - occuTotal;
        
        cout << "Total Rooms: " << total_rooms << endl;
        cout << "Occupancy: " << occuTotal << endl;
        cout << "Total Vacancy: " << vacancy << endl;
        cout << setprecision(2);
        cout << fixed;
        cout << "Percentage Occupancy: " << occuPerc  << "%\n";
    }


    


