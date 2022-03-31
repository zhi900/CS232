#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i;
  int countC=0;
  int cChar =0;
  int countS =0;
  int countW = 0;
  int countWords = 1;
  int countLines = 0;
  int cUpper = 0,cLower=0, cDigit = 0;
  char buf[MAX_BUF];

  do {
    
     if (scanf("%[^\n]s", buf) == 1 ){
       len = strlen(buf);
       cChar+=len;
       printf("%d\n", len);
       for(i=0;i<len;i++){
         char a = buf[i];
         if(isupper(a)){
           cUpper++;
         }
         if(islower(a)){
           cLower++;
         }
         if(isdigit(a)){
           cDigit++;
         }
         if(buf[i] == ' '){
           countS++;
           countW++;
         }
         else if(buf[i] =='\n'){
           countLines++;
           countW++;
         }
         else if(buf[i] != ' ' && buf[i] != '\n'){
           countC++;
           }
         
         
        
     }
       if(countC>0){
         countW++;
         countLines++;
       }
       
       
                
    }
       
    else{
      len = 0;
    }
      
    
    getchar();
    
  } while (len > 1);
printf("%d %d %d %d %d %d %d\n", cChar + countLines, countW,countLines, countS, cUpper, cLower, cDigit);
  
}
