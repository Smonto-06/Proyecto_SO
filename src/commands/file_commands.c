#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "commands.h"

/* Comandos para trabajar con archivos. */
void cmd_leer(const char *file_name) {
    FILE *file = fopen(file_name, "r");
    if (file == NULL) {
        perror("No se pudo abrir el archivo");
        return;
    }

    char buffer[512];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        fputs(buffer, stdout);
    }

    fclose(file);
}

void cmd_crear(const char *file_name) {
    FILE *file = fopen(file_name, "w");
    if (file == NULL) {
        fprintf(stderr, "No se pudo crear el archivo '%s': %s\n", file_name, strerror(errno));
        return;
    }

    fclose(file);
    printf("Archivo '%s' creado correctamente\n", file_name);
}