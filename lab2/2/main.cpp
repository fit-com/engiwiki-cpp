#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = res * i;
    }
    printf("%d", res);
    return 0;
}
