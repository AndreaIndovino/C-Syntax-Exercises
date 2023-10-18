#include <stdio.h>
#include <stdbool.h>

int main(){

    // Strings

    char greetings[] = "Hello World!";
        printf("%s\n", greetings);

    // Access strings char / modify a single char

    greetings[0] = 'J';
        printf("%c\n", greetings[0]);
        printf("%s\n", greetings);

    // For Loop

    char carName[] = "Audi";
    int i;

    for(i = 0; i < 4; i++){
        printf("%c\n", carName[i]);
    }

    // Another way with \0 null terminating char

    char greetinsTwo [] = {'H', 'e', 'l', 'l', 'o',' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
        printf("%s\n", greetinsTwo);

    // sizeof
    printf("%lu\n", sizeof(greetings));
    printf("%lu\n", sizeof(greetinsTwo));
    //Both output 13

    return 0;
}
