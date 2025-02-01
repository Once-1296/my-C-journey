#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "awwab ", str2[] = "wadekar";
   strncat(str1, str2, 3);

   puts(str1);

   return 0;
}