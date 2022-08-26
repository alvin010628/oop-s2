#include<iostream>
using namespace std;

int main()
{
    int arr[]={-1,0,1,2,-3,4};
    int len = 6;
    cout << "the number of negative values(1) :" << negative_count(arr,len) << endl;
    cout << "the number of negative values(2) :" << negative_count(arr,len) << endl;

    int num_negative  = negative_count(arr,len);
    int num = extract_negatives(arr,len,num_negative);
    cout << "The array is:"<<endl;
    for(int i=0;i<num_negative;i++)
    {
        cout<< *(num+i)<<" ";
    }
    return 0
}