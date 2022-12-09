#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
* Determine if the last digit of a random number is
* greater than or less than 5 or zero ..
* Return: 0 on success
*/
int main(void)
{
        int n;
        char last[] = "Last digit of";

	      srand(time(0));
	      n = rand() - RAND_MAX / 2;
        printf("%s %d is %d ", last, n, n % 10);
        if (n % 10 > 5)
        {
                printf("and is greater than 5\n");
         }
         else if (n % 10 == 0)
         {
                printf("and is 0\n");
         }
         else
         {
                printf("and is less than 6 and not 0\n");
         }
	      return (0);
}
