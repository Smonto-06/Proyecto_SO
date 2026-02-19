#include <stdio.h>

#include "utils.h"

void print_usage(const char *usage) {
    fprintf(stderr, "%s\n", usage);
}

void print_unknown_command(const char *command) {
    fprintf(stderr, "Comando no reconocido: %s\n", command);
    fprintf(stderr, "Escribe 'ayuda' para ver comandos disponibles\n");
}