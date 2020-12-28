/*Convert celsius to fahrenheit*/

#include <stdio.h>

int main(void)
{
   float cent,fahr;
   scanf("%f",&cent);
   fahr=cent*(9.0/5.0)+32;  /*Specifying formula*/
   printf("%f C equals %f F\n",cent,fahr);
}   
