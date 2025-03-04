#include <stdio.h>
#include <string.h>

// Er på oppgave 2.2

int take_Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        fprintf(stdout, "indeks: %d : %d\n", i, arr[i]);
    }
}

void fill_int_array() {
    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }
}

void print_int_array() {
    int array[10];
    int* ptr = array;
    for (int i = 0; i < 10; i++) {
        printf("Adress: : %d\n", array[i]);
    }
}

int main(int argc, char const *argv[])
{
    fill_int_array();
    print_int_array();

    return 0;
}
