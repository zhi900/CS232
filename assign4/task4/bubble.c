#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>

#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */
void SortNames(char** pStrings, int size)
{
  for (int j = 0; j < size -1; j++) {
    for (int i = 0; i < size -1; i++) {
      if (0 < strcmp(pStrings[i], pStrings[i +1])) {
        char* temp = pStrings[i+1];
        pStrings[i+1] = pStrings[i];
        pStrings[i] = temp;
      }
    }
  }
}
int main()
{
  char * Strings[NUM];
  
  int j;
  
  printf("Please enter %d strings, one per line:\n", NUM);
    
  for(int i=0;i<NUM;i++){
    Strings[i] = malloc(NUM);
    fgets(Strings[i], LEN-2, stdin);
    
    j++;
    
    
    
  }
  
    
   puts("\nHere are the strings in the order you entered:");

    for(int i=0;i<NUM;i++){
    
    printf("%s\n",Strings[i]);
    
  }
   
 SortNames(Strings, NUM);
  puts("\nIn alphabetical order, the strings are:");     
 
  for(int i = 0;i<NUM;i++){
    
    printf("%s\n",Strings[i]);
  }       
         
   

 
  


}

