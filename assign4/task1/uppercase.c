#include <stdio.h>
#include <ctype.h>
 int main(void)
 {
   char str[1000];
   int ch, n = 0;
  printf("Please, provide input: ");
   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }
   
   for (int i = 0; i < n; ++i){
     
      if(!isdigit(str[i])){
        str[i] &= ~' ';
      }
      putchar(str[i]);
   }
      
   
    /* trailing '\n' needed in Standard C */

   return 0;
 }
