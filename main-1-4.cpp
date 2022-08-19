#include <iostream>
using namespace std;

int main()
{
    double a[3][2] = { {1.5,2.5},{3.5,4.5},{5.5,6.5} };
    double b[3][2];
    copy_doubles(a[0], b[0], 3);

    return 0;
}