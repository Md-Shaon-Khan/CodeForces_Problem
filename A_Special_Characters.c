#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) {
      printf("NO\n");
      continue;
    }
    printf("YES\n");
    for (int i = 0; i < n / 2; ++i)
      for (int j = 0; j < 2; ++j)
        printf("%c", "AB"[i & 1]);
    printf("\n");
  }
  return 0;
}
