#include <bits/stdc++.h>
#define maxn 100
int a[maxn];
int main() {
    int n, k, first = 1;
    // 把数组a清零
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    for (int i =1; i <= k; i++ ) {
        for (int j = 1; j <=n; j++) {
            if (j % i == 0) {
                a[j] = !a[j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i]) {
            // 避免输出多空格
            if (first) {
                first = 0;
            }else{
                printf(" ");
            }
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
