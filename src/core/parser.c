#include <string.h>

#include "parser.h"

void trim_newline(char *text) {
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }
}

int tokenize(char *line, char *args[], int max_args) {
    int count = 0;
    char *token = strtok(line, " \t");

    while (token != NULL && count < max_args - 1) {
        args[count++] = token;
        token = strtok(NULL, " \t");
    }

    args[count] = NULL;
    return count;
}