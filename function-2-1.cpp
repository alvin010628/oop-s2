#include<iostream>
using namespace std;

string month_lookup(int day)
{
    string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    string output;
    if (day<1 or day>12)
        output = "invalid month";
    else 
        return months [day-1];

    return output;
}