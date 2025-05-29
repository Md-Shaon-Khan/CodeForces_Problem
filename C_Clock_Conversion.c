#include <stdio.h>

void solve() {
    int h, m; char c;
    scanf("%d %c %d", &h, &c, &m);
    char* am = (h < 12 ? " AM" : " PM");
    h = (h % 12 ? h % 12 : 12);
    printf("%s%d%c%02d%s\n", (h < 10 ? "0" : ""), h, c, m, am);
}

int main() {
    int tt;
    scanf("%d", &tt);
    for (int i = 1; i <= tt; i++) {
        solve();
    }
    return 0;
}