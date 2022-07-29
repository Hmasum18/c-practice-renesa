#include <stdio.h>
#include <string.h>
 
union data {
   int i;
   int j;
   float f;
   char str[20];
};
 
int main( ) {
   union data d;        
   
   d.i = 10;
   printf( "d.i : %d\n", d.i);
   
   printf("d.j : %d\n", d.j); // same as d.i as they share space
   
   d.j = 20; // d.i will change as well
   printf("d.i : %d\n", d.i);
   
   d.f = 220.5;
   printf( "d.f : %f\n", d.f);
   
   strcpy( d.str, "C Programming");
   printf( "d.str : %s\n", d.str);
   
   d.i = 99;
   printf("%d\n", d.i);
   printf("%s\n", d.str);

   return 0;
}