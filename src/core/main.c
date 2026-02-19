#include "shell.h"

/*
 * main es el punto de entrada del programa.
 * Solo delega el trabajo al bucle principal para mantener ordenado el proyecto.
 */
int main(void) {
    shell_loop();
    return 0;
}