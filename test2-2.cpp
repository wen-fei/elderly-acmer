#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    for (int a = 1; a <= 9; a++)
    {
        for (int b = 1; b <= 9; b++)
        {
            int n = a * 1100 + b * 11;
            int m = floor(sqrt(n) + 0.5);
            if (m * m == n)
            {
                printf("%d\n", n);
            }
        }
    }
    system("pause");
    return 0;
}