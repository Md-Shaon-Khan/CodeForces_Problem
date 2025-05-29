#include <stdio.h>

int main() {
    int t, n;
    int aa[100000];
    scanf("%d", &t);
    while (t--) {
        int d = 0, rem = 0;
        scanf("%d", &n);
        if (n >= 1000) {
            rem = n % 1000;
            aa[d++] = n - rem;
            n %= 1000;
        }
        if (n >= 100) {
            rem = n % 100;
            aa[d++] = n - rem;
            n %= 100;
        }
        if (n >= 10) {
            rem = n % 10;
            aa[d++] = n - rem;
            n %= 10;
        }
        if (n < 10 && n > 0) {
            aa[d++] = n;
        }
        int va[100000];
        for (int i = 0; i < d; i++) {
            va[i] = aa[i];
        }
        printf("%d\n", d);
        for (int i = 0; i < d; i++) {
            printf("%d ", va[i]);
        }
        printf("\n");
    }
    return 0;
}
