#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    const int MOD = 1000000;
    int n, s = 0;
    scanf("%d", &n);
    if (n > 25) {
        // 25!末尾有6个0，所以从第5项开始， 后面的所有项都不会影响和的末6位数字
        printf("%d\n", s % MOD);
    }
    for (int i = 1; i <=n; i++) {
        int fac = 1;
        for (int j = 1; j <= i; j++) {
            fac *= j;
        }
        s += fac;
    }

    printf("%d\n", s % MOD);
    printf("Time used %.2f s\n", (double)clock() / CLOCKS_PER_SEC);
    system("pause");
    return 0;
}