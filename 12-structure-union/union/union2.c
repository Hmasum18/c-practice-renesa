#include <stdio.h>
#include <string.h>

union data {
   int i;
   float f;
   char str[20];
};

int main( ) {
   union data d;

   d.i = 123;
   d.f = 220.5;
   strcpy( d.str, "C Programming");

   printf( "d.i : %d\n", d.i);
   printf( "d.f : %lf\n", d.f);
   printf( "d.str : %s\n", d.str);

   return 0;
}
