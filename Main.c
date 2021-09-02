/*
3.	Check which type of triangle it is:
Equilateral triangle: All three sides are equal.
   Isosceles triangle: All two sides are equal.
    Scalene triangle: No sides are equal.
Or

Equilateral triangle: All three angles are 60.
   Isosceles triangle: Any 2 angles are equal.
    Scalene triangle: No angles are equal
*/
#include "stdio.h"
int main()
{
  int a;
  int b;
  int c;
  int d;
  printf("Enter 1 for finding triangle based on length\n");
  printf("Enter 2 for finding triangle based on angles\n");
  printf(">>");
  scanf("%d\n", &a);
  getchar();
  switch(a)
  {
      printf("Entered Switch\n");
    case 1:
            printf("Enter length 1\n>>");
            scanf("%d", &b);
            printf("Enter length 2\n>>");
            scanf("%d", &c);
            printf("Enter length 3\n>>");
            scanf("%d", &d);
            if (a == b == c)
            {
              printf("Equilateral triangle");
            }
            else if (a == b || a == c || b == c)
            {
              printf("Isosceles triangle");
            }
            else
            {
              printf("Scelene triangle");
            }
            break;
            
      case 2:
              printf("Enter angle 1\n>>");
              scanf("%d", &b);
              printf("Enter angle 2\n>>");
              scanf("%d", &c);
              printf("Enter angle 3\n>>");
              scanf("%d", &d);
              int e = a+b+c;
              if (e != 180)
              {
                printf("Angles should sum upto 180");
                break;
              }
              else
              {
                printf("\n");
              }
              if (a == b == c)
              {
                printf("Equilateral triangle");
              }
              else if (a == b || a == c || b == c)
              {
                printf("Isosceles triangle");
              }
              else
              {
                printf("Scelene triangle");
              }
              break;
        default:
              printf("Wrong number. Please try later");
    }
}
