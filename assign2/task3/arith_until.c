#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, c;
  while(r!=0){
  printf("Enter radius (in millimeter):\n");
  scanf("%f", &r);

  a = PI * (r/25.4) * (r/25.4);
  c = PI * 2 * r;

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("its circumference is %3.2f (in).\n", c/25.4);
  }
  printf("Exit");
}