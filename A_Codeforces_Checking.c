#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        char c;
        char s[] = "codeforces";
        scanf(" %c", &c);
        char *ptr = strchr(s, c); 
        if (ptr != NULL) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}
