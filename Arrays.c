#include <stdio.h>
#include <stdbool.h>

int main(){

    // Arrays

    int myNumb[] = {29, 59, 79, 99};
        printf("%d\n", myNumb[0]); //Outputs 29
    myNumb[2] = 89;
        printf("%d\n", myNumb[2]); //Outputs 89 instead of 79

    // Loop with Arrays

    int studentAge[] = {17, 19, 22, 25};
    int i;

    for(i = 0; i < 4; i++){
        printf("%d\n", studentAge[i]);
    }

    // Set Array size

    int studentID[3];

    studentID[0] = 1293;
    studentID[1] = 2939;
    studentID[2] = 3859;

    return 0;
}
