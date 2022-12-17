//
//  main.cpp
//  lottery_ticket
//
//  Created by Peter Roger Generelly IV on 11/10/22.
//

#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));
    const int SIZE = 7;
    int ticket [SIZE];
    
    for(int i = 0; i < 7; i++);
    {
        gen_ticket(ticket, SIZE);
        
        cout << "Lottery Ticket " << i + 1;
        
        for(int j = 0; j < SIZE; j++)
            cout << set(2) << setfill('0') << ticket[j] << " ";
        cout << "\n";
    }
    
    return 0;
}

void gen_ticket(int ticket[], int size);
{
    for(int i = 0, i < size; i++)
        ticket[i] = rand() % 100;
    
}
