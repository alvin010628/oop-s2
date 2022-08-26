#include<iostream>
using namespace std;

string* create_int_strings(int num_vals)
{
    string* vals = new string();
    for(int i=0; i<num_vals; i++)
    vals[i] = i +48;
    return vals;
}

void display_str_array(string *vals, int num_vals)
{
    for(int i=0; i<num_vals; i++)
    cout << vals[i] <<" ";
}
