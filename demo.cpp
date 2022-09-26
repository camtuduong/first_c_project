#include <stdio.h>
#include "abc.cpp"

void demo(int a) {
   printf("%d", a);
}

int main() {

   char  a = 'a';
   int q = 1;
   int w = 1;
   int e = 0;
   e = w + q;
   w = 3;
   e += w;
   // printf() displays the string inside quotation
   printf("%d\n", e);
   demo(1);
   aaaa();

   return 0;
}