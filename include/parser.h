#ifndef PARSER_H
#define PARSER_H

/* Quita salto de línea final si existe. */
void trim_newline(char *text);

/*
 * Separa la línea en tokens usando espacios/tabs.
 * Retorna cuántos argumentos encontró.
 */
int tokenize(char *line, char *args[], int max_args);

#endif