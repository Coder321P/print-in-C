#include <stdio.h>
int main(void) { //begining of the main
    int i=0; // specific line used to repeat with the for
    // A for loop that prints BlahBlehBlih three times.
    for(i = 0; i < 3; i++) { //start of the first loop
        printf("Blah"); //first instruction inside the loop
        printf("Bleh"); //second instruction inside the loop
        printf("Blih "); //third instruction inside the loop
    } //end of the first loop
    // End of for loop. Start new line.
    printf("\n"); //prints a n
    // A for loop that prints BlohBluh six times.
    for(i = 0; i < 6 ; i++) {
        printf("Bloh");
        printf("Bluh ");
    }
    return 0;
}