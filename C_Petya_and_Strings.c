#include <stdio.h>
 #include <string.h>

int main ()
 {
 char str1[100];
 char str2[100];
 gets(str1);
 gets(str2);

int ret;

ret = strcmp(str1, str2);

if(ret < 0)   printf("1\n");

else if(ret > 0)  printf("-1\n");

else      printf("0\n");

return(0);

}