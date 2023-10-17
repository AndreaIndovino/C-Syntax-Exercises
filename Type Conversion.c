#include <stdio.h>

// Type conversion

/* int x = 5;
   int y = 2;
   int sum = 5 / 2;

   printf ("&d", sum); Outputs 2 and not 2.5

*/

// int x,y and sum in the main function because are constant value

int main(){
    const int x = 5;
    const int y = 2;
    float sum = (float) x / y;
    printf("%.1f\n", sum); //Outputs 2.5
    return 0;
}
