//
//  main.cpp
//  roger_generelly_lab5_code.cpp
//
//  Created by Peter Roger Generelly IV on 10/24/22.
//
/*

Author: Roger Generelly

Program Title: Hotel Occupancy
File Description:

 ask the user for the highest floor the hotel’s elevator can reach. Afterwards, the program will ask, floor by floor, the following:

 · Total number of rooms on the floor

 · Number of rooms occupied on this floor
 Once the program has completed inputting the data for each floor, the following statistics should be calculated and displayed to the user:

 · The total room count at the hotel

 · The total number of rooms that are occupied

 · The total number of rooms that are vacant

 · The percentage occupancy of the hotel. (Rounded to 2 decimal place)

*/
#include <iostream>
using namespace std;

int main() {
    int hfnum,total_room, occupied_rooms,vacant_rooms;
// declares floor number , total room count, occupied rooms, as integer
    double occu_perc;
    cout << "What is the highest floor number the hotel has?";
    cin >> hfnum;
    cout << endl;
    cout << endl;
        for(int i = 1; i <= hfnum; i++){
            cout << "Enter the total room count for Floor " << i << ": " << endl;
            cin >> total_room;
            cout << "Enter the occupancy(number of rooms occupied for Floor" << i << endl;
            cin >> occupied_rooms;
            if(total_room >= occupied_rooms){
                
            
            vacant_rooms = total_room - occupied_rooms;
            occu_perc = total_room / occupied_rooms;
            }
        }
    


if (i == 13){
        ++i;
    ++hfnum;
        
    cout >> "
else{
    cout << "---> ERROR: Floor occupancy should not exceed the room count.  Enter again.... ";
    };
        
    
    
    
    
    
    return 0;
}
