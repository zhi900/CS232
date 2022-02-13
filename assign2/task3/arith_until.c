#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, c;
  
  do{
    
    printf("Enter radius (in mm):\n");
    scanf("%f", &r);
  if(r>0){
  a = PI * (r/25.4) * (r/25.4);
  c = PI * 2 * (r/25.4);

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n", c);
    }
  } while(r>0);
  printf("Exit\n");
}
