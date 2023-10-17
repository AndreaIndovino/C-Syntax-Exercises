#include <stdio.h>
#include <stdbool.h> //Import the boolean header file

int main(){
    bool codingisFun = true;
    bool codingisBoring = false;
    printf("%d\n", codingisFun); //Returns 1 (true)
    printf("%d\n", codingisBoring); //Returns 0

    int x = 100;
    int y = 90;

    printf("%d\n", x > y); //Returns 1

    //If Statement with boolean

    int myAge = 29;
    int votingAge = 18;

    if (myAge >= votingAge){
        printf("Allowed to vote!");
        }else {
            printf("Not allowed to vote.");
        }

    return 0;
}
