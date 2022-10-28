//
//  AirCraft.hpp
//  p4
//
//  Created by Alvin Wang on 28/10/2022.
//

#ifndef AIR_CRAFT_H
#define AIR_CRAFT_H
#include<string>
using namespace std;

class AirCraft{
    protected:
    string type;
    int weight;
    float fuel;
    int numberOfFlights;
    
    public:
    AirCraft();

    AirCraft(string t, int w, int n);

    void set_type(string t);
    void set_weight(int w);
    void refuel();
    void set_numberOfFlights(int n);

    string get_type();
    int get_weight();
    int get_numberOfFlights();

    virtual int get_speed() = 0;
};

#endif
