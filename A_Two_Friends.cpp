#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);
    int *v = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; ++i) {
        int fnd = i + 1;
        int bst = v[i];
        if (v[bst - 1] == fnd) {
            printf("2\n");
            free(v);
            return;
        }
    }
    printf("3\n");
    free(v);
}

int main() {
    int TC;
    scanf("%d", &TC);
    while (TC--) {
        solve();
    }
    return 0;
}
