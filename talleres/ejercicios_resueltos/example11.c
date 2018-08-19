/* Programming Exercise 11-14 */
#include <stdio.h>
#include <stdlib.h>
/* for atof() */
#include <math.h>
/* for pow() */
int main(int argc, char *argv[])
{
        double num, exp;
        if (argc != 3)
                printf("Usage: %s number exponent\n", argv[0]);
        else
        {
                num = atof(argv[1]);
                exp = atof(argv[2]);
                printf("%f to the %f power = %g\n", num, exp, pow(num,exp));
        }
        return 0;
}
