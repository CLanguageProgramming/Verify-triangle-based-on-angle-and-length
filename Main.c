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
#include <stdio.h>
void length();
void angle();
int main()
{
    printf("Enter 1 to verify triangle by length\n");
    printf("Enter 2 to verify triangle by angle\n");
    printf(">> ");
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        length();
    }
    else if (a == 2)
    {
        angle();
    }
    else
    {
        printf("Wrong number. Please try later");
    }
    return 0;
}

void length()
{
    int la;
    int lb;
    int lc;
    printf("Enter Length of side 1\n>> ");
    scanf("%d", &la);
    printf("Enter Length of side 2\n>> ");
    scanf("%d", &lb);
    printf("Enter Length of side 3\n>> ");
    scanf("%d", &lc);
    if(la+lb>lc && la+lc>lb && lb+lc>la)
    {
        if (la==lb==lc)
        {
            printf("Equileteral triangle");
        }
        else if (la==lb || la==lc || lb==lc)
        {
            printf("Isoceles triangle");
        }
        else
        {
            printf("Scelene triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
}

void angle()
{
    int aa;
    int ab;
    int ac;
    printf("Enter Angle 1\n>>");
    scanf("%d", &aa);
    if(aa == 180 || aa == 179)
    {
        printf("Invalid angle");
    }
    printf("Enter Angle 2\n>>");
    scanf("%d", &ab);
    if(ab == 180 || ab == 179)
    {
        printf("Invalid angle");
    }
    printf("Enter Angle 3\n>>");
    scanf("%d", &ac);
    if(ac == 180 || ac == 179)
    {
        printf("Invalid triangle");
    }
    int a = aa+ab+ac;
    if (a == 180)
    {
        if (aa==ab==ac)
        {
            printf("Equelateral triangle");
        }
        else if (aa==ab || aa==ac ||  ab==ac)
        {
            printf("Isoceles triangle");
        }
        else
        {
            printf("Scelene triangle");
        }
    }
    else
    {
        printf("Invalid triangle. %d+%d+%d!=180", aa, ab, ac);
    }
}
