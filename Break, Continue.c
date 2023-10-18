#include <stdio.h>
#include <stdbool.h>

int main(){
    // break to stop loop when i == 4;

    int i;

    for (i = 0; i < 10; i++){
        if(i == 4){
            break;
        }
        printf("%d\n", i);
    }

    // Continue statement

    int j;

    for(j = 0; j < 10; j++){
        if(j == 4){
            continue;
        }
        printf("%d\n", j);
    }

    // Break & Continue in while loop

    int x = 0;

    while (x < 10){
        if(x == 4){
            break;
        }
        printf("%d\n", x);
        x++;
    }

    int y = 0;

    while (y < 10){
        if(y == 4){
            y++;
            continue;
        }
        printf("%d\n", y);
        y++;
    }

    return 0;
}
