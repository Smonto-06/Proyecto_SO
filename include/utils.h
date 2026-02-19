#ifndef UTILS_H
#define UTILS_H

/* Mensajes de UI sencillos para el usuario. */
void print_welcome(void);
void print_prompt(void);

/* Errores/ayuda de uso para mantener mensajes consistentes. */
void print_usage(const char *usage);
void print_unknown_command(const char *command);

/* Resetea arreglo de argumentos a NULL. */
void clear_args(char *args[], int max_args);

#endif