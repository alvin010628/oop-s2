#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array1[3][2] = {{"one","two"},{"three","four"},{"five","six"}};
    string array2[3][2];
    string string_2d_copy(array1,array2,3);
    for(int i=0;i<3;i++)
	{
		for(int x=0;x<2;x++)
		{
			cout<<array2[i][x]<<" ";
		}
		cout<<endl;
        system ("pause");
	}
    return 0;
}
