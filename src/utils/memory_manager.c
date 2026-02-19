#include "utils.h"

/*
 * En esta shell no hay memoria dinámica compleja.
 * Aun así dejamos este archivo para respetar la arquitectura solicitada.
 */
void clear_args(char *args[], int max_args) {
    int i;
    for (i = 0; i < max_args; i++) {
        args[i] = 0;
    }
}