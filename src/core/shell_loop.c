#include <stdio.h>

#include "commands.h"
#include "parser.h"
#include "shell.h"
#include "utils.h"

/*
 * REPL = Read, Eval, Print, Loop.
 * 1) Muestra prompt.
 * 2) Lee línea del usuario.
 * 3) La parte en tokens.
 * 4) Ejecuta comando.
 */
void shell_loop(void) {
    char line[MAX_LINE];
    char *args[MAX_ARGS];

    print_welcome();

    while (1) {
        print_prompt();

        if (fgets(line, sizeof(line), stdin) == NULL) {
            printf("\nSaliendo de la shell...\n");
            break;
        }

        trim_newline(line);
        if (line[0] == '\0') {
            continue;
        }

        clear_args(args, MAX_ARGS);
        int argc = tokenize(line, args, MAX_ARGS);
        if (argc == 0) {
            continue;
        }

        if (!execute_command(argc, args)) {
            break;
        }
    }
}