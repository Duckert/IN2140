/*
 * Add the include files that you need. "man" can help you find them.
 * You will probably need stdio.h for printf and fprintf
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_SUBSTRING_LENGTH 100

#include "stringops-todo.h"

/*
 * Find the requirements for these functions in the assignment text.
 */
int   stringsum( char *s )
{
    /*int strsum = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        if (isalpha(s[i])) {
            char lowercase = tolower(s[i]);
            strsum += (lowercase - 'a' + 1);  
        }
    }

    return strsum;*/
}

int   distance_between( char *s, char c )
{
    int first_instance = -1;
    int final_instance = -1;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c && first_instance == -1) {
            first_instance = i;
            continue;
        }
        if (s[i] == c && final_instance == -1) {
            final_instance = i;
            break;
        }
    }

    if (first_instance == -1) {
        return -1;
    } else if (final_instance == -1) {
        return 0;
    }

    return final_instance-first_instance;
}

char* string_between( char *s, char c )
{
    static char subString[MAX_SUBSTRING_LENGTH];  // Statisk buffer
    int first_instance = -1;
    int final_instance = -1;
    int subIndex = 0;  // Index for subString

    // Finner første og andre forekomst av 'c'
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            if (first_instance == -1) {
                first_instance = i;
            } else {
                final_instance = i;
                break;  // Hopper ut av loopen etter å ha funnet andre forekomst
            }
        }
    }

    // Hvis det ikke er 2 forekomster retunerer vi den tomme strengen
    if (first_instance == -1 || final_instance == -1) {
        subString[0] = '\0';
        return subString;
    }

    // Henter ut karakterer mellom forekomstene av 'c'
    for (int i = first_instance + 1; i < final_instance; i++) {
        if (subIndex < MAX_SUBSTRING_LENGTH - 1) {
            subString[subIndex++] = s[i];
        } else {
            break;
        }
    }
    
    subString[subIndex] = '\0';  // Null-terminate substringen
    return subString;

    
    printf( "%s does nothing yet\n", __FUNCTION__ );
    return NULL;
}

int  stringsum2( char *s, int *res )
{
    printf( "%s does nothing yet\n", __FUNCTION__ );
    return 0;
}


