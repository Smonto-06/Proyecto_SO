#ifndef COMMANDS_H
#define COMMANDS_H

/* Muestra todos los comandos de la shell. */
void cmd_help(void);

/* Ejecuta un comando ya tokenizado. Retorna 0 para salir, 1 para continuar. */
int execute_command(int argc, char *args[]);

/* Comandos agrupados por tipo. */
void cmd_listar(void);
void cmd_leer(const char *file_name);
void cmd_tiempo(void);
void cmd_calc(const char *n1, const char *op, const char *n2);
void cmd_crear(const char *file_name);
void cmd_limpiar(void);

#endif