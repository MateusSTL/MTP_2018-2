/* P4.c */
/* Mateus Santos Tornilio Lemos */
/* 11811EEL006 */

#include <stdio.h>

double Ackermann(double a, double b);

int main()
{
   double a, b;
   scanf("%lf%lf", &a, &b);
   printf("\"%g\" + \"%g\" resulta em \"%g\"\n", a, b, Ackermann(a,b));
   return 0;
}

double Ackermann(double a, double b)
{
   if(a==0)
        return b+1;
   else if(a > 0 && b == 0) 
        Ackermann(a-1,1);
   else if(a > 0 && b > 0) 
        Ackermann(a-1, Ackermann(a, b-1));
}
