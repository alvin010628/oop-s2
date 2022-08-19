//function
void copy_doubles(double *old_array,double *new_array,int length)
{
    for (int i = 0; i < length*2; i++) 
    // 2 elements in second dimension ,6 is the total address (2*3)
    {
        *new_array = *old_array; 
        new_array++; 
        old_array++;
    }
}