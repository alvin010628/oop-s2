//
//  main.cpp
//  Exam
//
//  Created by Alvin Wang on 9/9/2022.
//

#include "Unit.cpp"

// main function definition
int main()
{
// Declares an array of object of class Unit of size 3
    Unit unit[3];
// Creates each object using parameterized constructor
    unit[0] = Unit(1, 900.00, 25300);
    unit[1] = Unit(9, 800.50, 90000);
    unit[2] = Unit(3, 100.75, 10000);

    for(int c = 0; c < 3; c++)
        unit[c].show();
    return 0;
}
