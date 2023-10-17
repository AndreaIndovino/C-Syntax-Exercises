#include <stdio.h>

float myFloat = 3.5;
double myDouble = 20.45;

/*.1f, .2f ecc. to avoid extra 0's
after the float or double numbers */

int main (){
    printf("%.1f\n", myFloat);  //output == 3.5
    printf("%.4lf\n", myDouble); //output == 20.4500
    return 0;
}

