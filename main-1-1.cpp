#include<iostream>
using namespace std;

extern string* create_int_strings(int num_vals);
extern void display_str_array(string *vals, int num_vals);

int main()
{
    string* str1 = create_int_strings(5);
    display_str_array(str1,5);
    return 0;
}
