
#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, c;

  printf("Enter radius (in mm):\n");
  scanf("%f", &r);

  a = PI * (r/25.4) * (r/25.4);
  c = PI * 2 * r;

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("its circumference is %3.2f (in).\n", c/25.4);
}
