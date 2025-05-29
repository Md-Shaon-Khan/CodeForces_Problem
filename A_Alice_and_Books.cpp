#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int mx = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > mx) {
                mx = a[i];
            }
        }
        printf("%d\n", mx + a[n - 1]);
    }
    return 0;
}
