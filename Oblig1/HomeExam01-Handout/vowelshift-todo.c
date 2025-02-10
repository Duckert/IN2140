/*
 * Add the include files that you need. "man" can help you find them.
 * You will probably need stdio.h for printf and fprintf
 */
#include <stdio.h>

#include "vowelshift-todo.h"

/*
 * Find the requirements for these functions in the assignment text.
 */
void vowelshift( char* buffer, char repl )
{
    const char *vowels = "aeiou";

    for (int i = 0; i < strlen(buffer); i++) {
        for (int j = 0; j < strlen(vowels); j++)
        if (buffer[i] == vowels[j]) {
            buffer[i] = repl;
            break;
        }
    }
    printf("%s\n", buffer);
    printf( "I do something\n" );
}

