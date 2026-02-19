### Hecho Por:
Samuel Montoya Espinosa
# EAFITos 

**EAFITos** es una shell educativa escrita en C para practicar conceptos base de Sistemas Operativos con una implementación sencilla y fácil de entender.

## ¿Qué aprendí con este proyecto?
- Cómo funciona un ciclo **REPL** (Read-Eval-Print-Loop).
- Manejo básico de **procesos y utilidades del sistema** desde una interfaz tipo terminal.
- Lectura/escritura de archivos usando funciones estándar de C.
- Separación del código por módulos (`core`, `commands`, `utils`) para mantener una arquitectura limpia.

##  Funcionamiento general de la shell
Al ejecutar el programa aparece el prompt `EAFITos>`. Allí escribes un comando y la shell lo divide en tokens (argumentos), por ejemplo:

Comando ingresado:
```text
calc 10 + 5
```

Cómo lo interpreta internamente:
- `args[0] = "calc"` (nombre del comando)
- `args[1] = "10"`
- `args[2] = "+"`
- `args[3] = "5"`

##  Comandos implementados

### Comandos básicos (6)
| Comando | Uso | Qué hace |
| :--- | :--- | :--- |
| `listar` | `listar` | Lista archivos/directorios del directorio actual. |
| `leer` | `leer <archivo>` | Imprime el contenido de un archivo de texto. |
| `tiempo` | `tiempo` | Muestra fecha y hora actual. |
| `calc` | `calc <n1> <op> <n2>` | Calculadora simple (`+`, `-`, `*`, `/`). |
| `ayuda` | `ayuda` | Muestra resumen de comandos. |
| `salir` | `salir` | Cierra la shell. |

### Comandos avanzados (2)
| Comando | Uso | Qué hace |
| :--- | :--- | :--- |
| `crear` | `crear <archivo>` | Crea un archivo vacío (avanzado de archivo). |
| `limpiar` | `limpiar` | Limpia la pantalla (avanzado de sistema). |

##  Estructura del proyecto
- `src/core/`: entrada principal, parser y bucle REPL.
- `src/commands/`: implementación de comandos por categoría.
- `src/utils/`: funciones auxiliares para mensajes y utilidades.
- `include/`: archivos `.h` con declaraciones públicas.
- `tests/`: pruebas básicas e integración.

##  Compilación y ejecución
1. Compilar:
   ```bash
   make
   ```
2. Ejecutar:
   ```bash
   make run
   ```
   o directamente:
   ```bash
   ./EAFITos
   ```
