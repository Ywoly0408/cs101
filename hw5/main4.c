#include <stdio.h>


int main() 
{
    int n = 12345;
    int new;
    
    if (n >= 1000)
    {
        int unit = n % 10;
        int thousand = n / 1000 % 10;
        
        new = n - unit - (1000 * thousand) + thousand + (1000 * unit) ;
    }
    
    else
    {
        int unit = n % 10;
        int thousand = 0;
        
        new = n - unit + (1000 * unit) ;
    }
        
    
    
    
    printf("%d", new);



    return 0;
}