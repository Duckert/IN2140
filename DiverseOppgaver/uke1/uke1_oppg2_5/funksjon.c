#include "shared.h"

int func(int* tall) {
    *tall += 20;
    return *tall;
}