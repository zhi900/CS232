#include <stdio.h>  
#include <string.h> 


#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

int main()
{
  char * Strings[NUM];
  int j;
  
  printf("Please enter %d strings, one per line:\n", NUM);
    
  for(int i=0;i<NUM;i++){
    
    fgets(&Strings[i], LEN-2, stdin);
    if((strcmp(&Strings[i], "\n"))==0){
      printf("its a blank line");
      break;
    }
    j++;
    
  }
   puts("\nHere are the strings in the order you entered:");

    for(int i=0;i<j;i++){
    
    printf("%s\n",&Strings[i]);
    
  }
   for(int i =0;i<j;i++){
     for(int k=0;k<j;k++){
       if(strcmp(&Strings[k], &Strings[k+1]) >0){
         void*temp = Strings[k+1];
         Strings[k+1] = Strings[k];
         Strings[k] = temp;
         
         
       }
     }
   }
    puts("\nIn alphabetical order, the strings are:");   
  for(int i=0;i<=j;i++){
    
    printf("%s\n",&Strings[i]);
    
  }

  


}

