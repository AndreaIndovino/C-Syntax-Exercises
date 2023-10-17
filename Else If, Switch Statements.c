#include <stdio.h>

int main(){
    int time = 22;
    if (time < 10){
        printf("Good morning.");
    }
    else if (time < 20){
        printf("Good day.\n");
    }
    else {
        printf("Good evening.\n");
    }

    //Switch statement

    int day = 6;

    switch(day){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Looking forward to the Weekend");
    }

    return 0;
}
