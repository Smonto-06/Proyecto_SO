#include <stdio.h>
#include <string.h>

#include "commands.h"
#include "utils.h"

/*
 * Dispatcher simple: revisa args[0] y llama la función correspondiente.
 * Nota: los 2 comandos avanzados son:
 * - crear (avanzado de archivo, implementado en file_commands.c)
 * - limpiar (avanzado de sistema, implementado en system_commands.c)
 *
 * Retorna 0 cuando se debe salir, 1 para continuar en el bucle.
 */
int execute_command(int argc, char *args[]) {
    if (strcmp(args[0], "salir") == 0) {
        printf("Saliendo de la shell...\n");
        return 0;
    }

    if (strcmp(args[0], "ayuda") == 0) {
        cmd_help();
    } else if (strcmp(args[0], "listar") == 0) {
        cmd_listar();
    } else if (strcmp(args[0], "leer") == 0) {
        if (argc != 2) {
            print_usage("Uso: leer <archivo>");
        } else {
            cmd_leer(args[1]);
        }
    } else if (strcmp(args[0], "tiempo") == 0) {
        cmd_tiempo();
    } else if (strcmp(args[0], "calc") == 0) {
        if (argc != 4) {
            print_usage("Uso: calc <num1> <operador> <num2>");
        } else {
            cmd_calc(args[1], args[2], args[3]);
        }
    } else if (strcmp(args[0], "crear") == 0) {
        if (argc != 2) {
            print_usage("Uso: crear <archivo>");
        } else {
            cmd_crear(args[1]);
        }
    } else if (strcmp(args[0], "limpiar") == 0) {
        cmd_limpiar();
    } else {
        print_unknown_command(args[0]);
    }

    return 1;
}