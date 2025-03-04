#include "shared.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int num = 5;
    int* tall = &num;
    func(tall);

    fprintf(stdout, "Sjekker: %d\n", *tall);
    return 0;
}
