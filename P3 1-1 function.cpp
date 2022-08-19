//Function to copy the values of one 2D array to another array
void string_2d_copy(std::string first[][2], std::string second[][2], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<2;x++)
        {
            second[i][x]=first[i][x];
        }
    }
}