#include <stdio.h>
#include <stdbool.h>

int main (){
/*
    // For loop
    int i;

    for (i = 0; i < 5; i++){
        printf("%d\n", i);
    }

    // Even values

    int x;

    for (x = 0; x < 10; x + 2); {
        printf("%d\n", x);
    }

*/
    // Nested Loop:

    int y, j;

    //Outer loop

    for (y = 1; y <= 2; ++y){
        printf("Outer: %d\n", y); //Executed 2 times
    }

    // Inner loop

    for (j = 1; j <= 3; ++j){
        printf("Inner: %d\n", j); //Execute 6 times (2*3)
    }
    return 0;
}
