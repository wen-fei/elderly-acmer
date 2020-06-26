#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int x, n = 0, min, max, s = 0;
    while (scanf("%d", &x) == 1)
    {
        s += x;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
        n++;
    }
    printf("%d %d %3.f\n", min, max, (double)s / n);
    system("pause");
    return 0;
}

