/*
 * Add the include files that you need. "man" can help you find them.
 * You will probably need stdio.h for printf and fprintf
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "stringops-todo.h"

/*
 * Find the requirements for these functions in the assignment text.
 */
int   stringsum( char *s )
{
    int strsum = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        if (isalpha(s[i])) {
            char lowercase = tolower(s[i]);
            strsum += (lowercase - 'a' + 1);  
        } else if (s[i] != ' ') {
            return -1;
        }
    }

    return strsum;
}

int   distance_between( char *s, char c )
{
    int first_inst = -1;
    int final_inst = -1;
    int length = strlen(s);

    // Finner første forekomst
    for (int i = 0; i < length; i++) {
        if (s[i] == c && first_inst == -1) {
            first_inst = i;
            break;
        }
    }

    // Finner siste forekomst
    for (int i = length; i > 0; i--) {
        if (s[i] == c && final_inst == -1) {
            final_inst = i;
            break;
        }
    }

    if (first_inst == -1) {
        return -1;
    } else if (final_inst == -1) {
        return 0;
    }

    return final_inst-first_inst;
}

char* string_between( char *s, char c )
{
    /* 
    * Finner første forekomst med strchr() og retunerer NULL
    * hvis den ikke finner karakteren
    */
    char* first_inst = strchr(s, c);
    if (!first_inst) return NULL;


    /*
    * Gjør det samme som linje 69 (nice), men retunerer heller
    * en tom streng.
    */
    char* final_inst = strrchr(s, c);
    if (first_inst == final_inst) return "";

    first_inst++;
    final_inst--;

    *(final_inst + 1) = '\0';

    return first_inst;
}

int  stringsum2( char *s, int *res )
{   
    int result = stringsum(s);

    if (result >= 0) {
        *res = result;
        return 0;
    }
    
    *res = -1;
    return -1;
}


