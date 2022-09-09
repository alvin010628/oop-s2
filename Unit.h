//
//  Unit.hpp
//  Exam
//
//  Created by Alvin Wang on 9/9/2022.
//



#ifndef
#define 

// Defines class Unit
class Unit
{
    int num_beds;
    int unit_val;
    double unit_size;
    public:
    // Default constructor
    Unit();
    Unit(int unit_val, int num_beds, double unit_size);
    int get_bedrooms();
    int get_value();
    double get_size();
    void show();
};

#endif
