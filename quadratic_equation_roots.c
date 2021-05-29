#include <stdio.h>
#include <math.h>
void main()
{  int a, b, c, d;
  double root1, root2;
  printf("Enter a, b and c for a quadratic equation where a*x*x + b*x + c = 0\n");
  scanf("%d%d%d", &a, &b, &c);
  d = b*b - 4*a*c;
  if (d < 0)
  { printf("First root = %lf + i%lf\n", (double)-b/(2*a), sqrt(-d)/(2*a));
    printf("Second root = %.lf - i%lf\n", (double)-b/(2*a), sqrt(-d)/(2*a));
  }
  else
  { root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);
    printf("First root = %.lf\n", root1);
    printf("Second root = %lf\n", root2);
  }
}
