#include<stdio.h>
#include<stdlib.h>

// 水仙花数
int main() {
    
    for(int i = 100; i <= 999; i++) {
        int a = i / 100, b = i /10 % 10, c = i % 10;
        int t = a*a*a + b*b*b + c *c *c;
        if (i == t) {
            printf("%d ", t);
        }
    }
    system("pause");
    return 0;

}