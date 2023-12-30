#include <stdio.h>
int main( )
{

    // b question
    int j = 10, k = 12 ;
    if ( k >= j )
    {
        {
            k = j ;
            j = k ;
        }
    }
    return 0 ;

    // b answer
    // Swapping is incorrect they both will have same value
}