#include<stdio.h>
#include <string.h>


// Er på oppgave 1.8

void funksjon(int* tall) {
    *tall += 5;
}

int main(int argc, char const *argv[])
{
    int tall = 1337;
    
    funksjon(&tall);

    fprintf(stdout, "Test: %d\n", tall);
}
