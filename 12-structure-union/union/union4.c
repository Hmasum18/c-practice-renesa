#include <stdio.h>
#include <string.h>
 
union data {
   int i;
   char str[8];
};
 
int main( ) { 
    union data d = {10};
    
   printf( "d.i : %d\n", d.i);

   d.i = 12345;

   printf( "d.i : %d\n", d.i);
   printf( "d.str : %s\n", d.str);
   
   
   return 0;
}