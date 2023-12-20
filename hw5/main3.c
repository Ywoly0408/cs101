#include <stdio.h>


int main() 
{

    for (int i = 1; i <= 9 * 9; i++) 
    {

        int row = (i - 1) / 9 + 1;
        int times = (i - 1) % 9 + 1;

        printf("%dx%d=%d\t", row, times, row * times);
        

        if (i % 9 == 0) 
        {
            printf("\n");
        }
    }

    return 0;
}