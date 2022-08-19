// function
void copy_integers(int old_array[],int new_array[],int length)
{
    int * ptrA = &old_array[0]; 
    int * ptrB= &new_array[0];
    for (int i = 0; i < length; i++)
    {
        *ptrB = *ptrA; 
        ptrB++; 
        ptrA++;    
    }
}
