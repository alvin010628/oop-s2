#include<iostream>
using namespace std;

int negative_count(int *vals[],int len)
{
    int count = 0;
    for(int i=0; i<len; i++)
    {
        if(*vals[i]<0)
        count++;
    }
}

int* extract_negatives(int *vals,int len, int num_negative)
{
    static int arr1[num_negative];
    int x = 0;
    for(int i=0; i<len; i++)
    {
        if(vals[i]<0)
        {
            arr1[x] = vals[i];
            x++;
        }
    }

    return arr1;
}