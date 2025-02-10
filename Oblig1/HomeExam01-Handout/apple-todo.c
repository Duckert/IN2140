/*
 * Add the include files that you need. "man" can help you find them.
 * You will probably need stdio.h for printf and fprintf
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "apple-todo.h"

/*
 * Find the requirements for these functions in the assignment text.
 */
int locateworm( char* buffer )
{
    for(int i = 0; i < strlen(buffer); i++) {
        if(buffer[i] == 'w') {
            return buffer[i];
        }   
    }

    return -1;
}

int removeworm( char* apple )
{
    int wormSum = 0;

    for(int i = 0; i < strlen(apple); i++) {
        if(apple[i] == 'w' || apple[i] == 'o' || apple[i] == 'r' || apple[i] == 'm') {
            wormSum += 1;
            apple[i] = ' ';
        }   
    }

    if (0 < wormSum) {
        return wormSum;
    }

    return 0;
}

