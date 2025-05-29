#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int skills[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &skills[i]);
    }

    int programming[n], maths[n], pe[n];
    int p_count = 0, m_count = 0, pe_count = 0;

    for (int i = 0; i < n; i++) {
        if (skills[i] == 1) {
            programming[p_count++] = i + 1;
        } else if (skills[i] == 2) {
            maths[m_count++] = i + 1;
        } else {
            pe[pe_count++] = i + 1;
        }
    }

    int teams = p_count < m_count ? p_count : m_count;
    teams = teams < pe_count ? teams : pe_count;

    printf("%d\n", teams);
    for (int i = 0; i < teams; i++) {
        printf("%d %d %d\n", programming[i], maths[i], pe[i]);
    }

    return 0;
}
