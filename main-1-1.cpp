//
//  main.cpp
//  p4
//
//  Created by Alvin Wang on 28/10/2022.
//

#include "AirCraft.hpp"
#include <iostream>

using namespace std;
int main()
{
    string type;
    cout << "Enter the type:";
    cin >> type;
    
    cout << "\nType:" << aircraft.get_type() << endl;
    cout << "Weight:" << aircraft.get_weight () << endl;
    cout << "numberOfFlights: " << aircraft.get_numberOfFlights() << endl;
}
