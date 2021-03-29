#include <stdio.h>

#include <stdio.h>

int main() {
   int i;

   printf("In cac so chan:\n");
   for(i = 1; i <= 10; i++) {
      if(i%2 == 0)
         printf(" %2d\n", i);
   }
   return 0;
}
