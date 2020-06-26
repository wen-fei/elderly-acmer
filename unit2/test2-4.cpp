#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, count = 0;
    scanf("%d", &n1);
    long long n = n1;
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            // 有乘法溢出问题
            n = n * 3 + 1;
        }
        else
        {
            n /= 2;
        }
        count++;
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}