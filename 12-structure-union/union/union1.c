#include <stdio.h>
#include <string.h>

union data {
   int i;
   float f;
   char str[20];
};


struct data_structure {
   int i;
   float f;
   char str[20];
};

typedef union data Data;
int main( ) {
   union data d;
   //struct data_structure d1;
   printf( "Memory size occupied by data : %d\n", sizeof(Data));
   printf( "Memory size occupied by data : %d\n", sizeof(struct data_structure));
   return 0;
}
