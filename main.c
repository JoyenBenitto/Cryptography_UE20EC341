#include "crypto.h"
#include <stdio.h>


int main()
{
    int a = euclid_GCD(18,24);
    printf("the GCD is  %d \n",a);


    int gcdd,inv;
    int flag =extended_euclid(3,5, &gcdd, &inv);
    if(flag == 1)
        printf("the gcd is: %d,the inverse is: %d",gcdd, inv);
    else
        printf("Inverse calculation not possible as the numbers are not relatively prime");
    return 0;
}