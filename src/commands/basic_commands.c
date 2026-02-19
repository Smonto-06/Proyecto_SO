#include <dirent.h>
#include <stdio.h>
#include <string.h>

#include "commands.h"

/* Comandos básicos de orientación y ayuda. */
void cmd_help(void) {
    printf("Comandos básicos (6):\n");
    printf("  listar                      - Muestra contenido del directorio actual\n");
    printf("  leer <archivo>              - Muestra contenido de un archivo de texto\n");
    printf("  tiempo                      - Muestra fecha y hora actual\n");
    printf("  calc <num1> <op> <num2>     - Calculadora básica (+, -, *, /)\n");
    printf("  ayuda                       - Muestra lista de comandos\n");
    printf("  salir                       - Termina la shell\n");

    printf("\nComandos avanzados (2):\n");
    printf("  crear <archivo>             - Avanzado de archivo: crea archivo vacío\n");
    printf("  limpiar                     - Avanzado de sistema: limpia la pantalla\n");
}

void cmd_listar(void) {
    DIR *dir = opendir(".");
    if (dir == NULL) {
        perror("No se pudo abrir el directorio actual");
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
            printf("%s\n", entry->d_name);
        }
    }

    closedir(dir);
}