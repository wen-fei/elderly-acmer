#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) {
        int fac = 1;
        for (int j = 1; j <= i; j++) {
            fac *= j;
        }
        s += fac;
    }

    printf("%d\n", s % 1000000);
    system("pause");
    return 0;
}