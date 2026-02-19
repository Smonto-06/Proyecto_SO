#include <stdio.h>

#include "utils.h"

void print_welcome(void) {
    printf("Bienvenido a EAFITos Shell\n");
    printf("Escribe 'ayuda' para ver comandos disponibles\n");
}

void print_prompt(void) {
    printf("EAFITos> ");
    fflush(stdout);
}