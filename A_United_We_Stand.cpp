#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(long long*)a - *(long long*)b);
}

void solve() {
    long long n;
    scanf("%lld", &n);

    long long* arr = (long long*)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), compare);

    if (arr[n-1] == arr[0]) {
        printf("-1\n");
    } else {
        long long itr = 0;
        while (arr[itr] == arr[0])
            itr++;

        printf("%lld %lld\n", itr, n - itr);
        for (int i = 0; i < itr; i++)
            printf("%lld ", arr[i]);
        printf("\n");
        for (int i = itr; i < n; i++)
            printf("%lld ", arr[i]);
        printf("\n");
    }

    free(arr);
}

int main() {
    long long T;
    scanf("%lld", &T);
    while (T--) {
        solve();
    }
    return 0;
}
