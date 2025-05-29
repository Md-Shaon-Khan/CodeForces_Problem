#include <stdio.h>
#include <string.h>

//#define rep(x, y, z) for(int x = (y); x <= (z); ++x)
//#define per(x, y, z) for(int x = (y); x >= (z); --x)

int T, n;
char s[100001];

int main() {
    scanf("%d", &T);
    while(T--) {
        scanf("%d %s", &n, s);
        int cntU = 0;
        for(int i = 0; s[i] != '\0'; ++i) {
            if(s[i] == 'U') ++cntU;
        }
        if(cntU % 2 == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}