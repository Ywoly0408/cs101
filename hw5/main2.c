#include <stdio.h>

int main() {
    int i, j;
    float PI = 0.0;
    float X;

    for (i = 1, j = 0; (PI >= 3.1416 || PI < 3.14159); i += 2, j++) 
    {
        X = 4.0 / i;
        
        if (j % 2 == 0)
        {
            PI = PI + X;
            
        }
        else
        {
            PI = PI - X;
        }
        
    }
    
    printf("PI = %f\n", PI);
    printf("X = %f", X);

    return 0;
}