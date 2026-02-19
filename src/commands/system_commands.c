#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "commands.h"

/* Comandos de sistema (hora, calculadora y limpiar pantalla). */
void cmd_tiempo(void) {
    if (setenv("TZ", "America/Bogota", 1) != 0) {
        perror("No se pudo configurar zona horaria");
    }
    tzset();

    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    if (local == NULL) {
        perror("No se pudo obtener la hora local");
        return;
    }

    char output[64];
    if (strftime(output, sizeof(output), "%Y-%m-%d %H:%M:%S", local) == 0) {
        fprintf(stderr, "No se pudo formatear la fecha/hora\n");
        return;
    }

    printf("Fecha y hora actual (America/Bogota): %s\n", output);
}

void cmd_calc(const char *n1, const char *op, const char *n2) {
    double num1 = atof(n1);
    double num2 = atof(n2);
    double result;

    if (strcmp(op, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(op, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(op, "*") == 0) {
        result = num1 * num2;
    } else if (strcmp(op, "/") == 0) {
        if (num2 == 0.0) {
            fprintf(stderr, "Error: división por cero\n");
            return;
        }
        result = num1 / num2;
    } else {
        fprintf(stderr, "Operador no válido. Usa: +, -, *, /\n");
        return;
    }

    printf("Resultado: %.6g\n", result);
}

/* Comando avanzado de sistema: limpiar la terminal usando ANSI. */
void cmd_limpiar(void) {
    printf("\033[2J\033[H");
    fflush(stdout);
}