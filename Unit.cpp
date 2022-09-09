//
//  Unit.cpp
//  Exam
//
//  Created by Alvin Wang on 9/9/2022.
//

#include "Unit.hpp"
#include <iostream>
using namespace std;

// Default constructor
Unit::Unit()
{
    num_beds = 0;
    unit_size = 0.0;
    unit_val = 0;
}

Unit::Unit(int nb, int va,double us)
{
    num_beds = nb;
    unit_size = us;
    unit_val = va;
}

int Unit::get_bedrooms()
{
    return num_beds;
}
// Function to return the value in dollars of the Unit
int Unit::get_value()
{
    return unit_val;
}
// Function to return the number of square meters in the unit
    double Unit::get_size()
{
    return unit_size;
}
// Function to display information
    void Unit::show()
{
cout<<"\n Number of bedrooms: "<<num_beds<<"\n Size: "<<unit_size<<"\n Value: $"<<unit_val<<endl;
}
