/*#include <stdio.h>
#include<string.h>
int main() {
    int t;

    scanf("%d", &t);

    while (t != 0) {
        int n;
        scanf("%d", &n);

        char ch[n];
        scanf("%s", ch);  

        int j = 0;
        for (int i = 0; i < n; i++) {
            if (ch[i] != ch[i + 1]) {
                ch[j++] = ch[i];
            }
        }
        ch[j] = '\0'; 
        
        int len = strlen(ch);
        int  a=0;
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(ch[i]==ch[j])
                {
                    a++;
                    printf("NO\n");
                    break;
                    

                }
            }
        }
        if(a==0)
        {
            printf("YES\n");
        }
         


        t--;
    }

    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[101];
        scanf("%s", s);

        char s2[101], elem = s[0];
        int k = 0, check = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] != elem) {
                s2[k] = elem;
                elem = s[i];
                k++;
            }
            for (int j = 0; j < k; j++) {
                if (s[i] == s2[j]) {
                    printf("NO\n");
                    check = 1;
                    break;
                }
            }
            if (check) {
                break;
            }
        }
        if (!check) {
            printf("YES\n");
        }
    }
    return 0;
}

